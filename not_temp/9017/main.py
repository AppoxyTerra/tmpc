from bs4 import BeautifulSoup
from requests import get
import re
from os import makedirs
from markdownify import markdownify as md

def getShelfsLinks(url: str) -> list[str]:
	raw_html = get(url).content
	bs = BeautifulSoup(raw_html, features="html5lib")
	links = []
	for i in bs.select("li>a"):
		link = i["href"]
		if re.match(r"^/wiki/[a-zA-Z_]+$", link):
			links.append(link)
	return links

def getPrintableVersionLink(url: str) -> str:
	raw_html = get(url).content
	bs = BeautifulSoup(raw_html, features="html5lib")
	for i in bs.select("p>i>b>a"):
		link = i["href"]
		text = i.text
		if text == "printable version":
			return link
	return None
def downloadPrintableVersion(url: str, name: str):
	print(f"Downloading '{name}' from '{url}'", end='\r')
	raw_html = get(url).content

	# Removing javascript shit
	bs = BeautifulSoup(raw_html, features="html5lib")
	for i in bs.select("script"):
		i.extract()
	s = bs.prettify('utf-8')

	decoded = s
	mk = md(decoded)
	open(f"books/{SHELF}/{name}.md", 'wb').write(mk.encode('utf-8', errors='replace'))
	
	print(f"Downloaded '{name}' from '{url}'.")

SHELF = ""
URLS = [
	"https://en.wikibooks.org/wiki/Shelf:Agriculture_and_husbandry",
	"https://en.wikibooks.org/wiki/Shelf:Armed_forces_and_combat",
	"https://en.wikibooks.org/wiki/Shelf:Culinary_arts",
	"https://en.wikibooks.org/wiki/Shelf:Survival",
	"https://en.wikibooks.org/wiki/Shelf:Trades",
	"https://en.wikibooks.org/wiki/Shelf:Transportation"
]

URLS = {i.rsplit(":",1)[1]:i for i in URLS}
for shelf, i in URLS.items():
	makedirs(f"books/{shelf}", exist_ok=True)
	SHELF = shelf
	dsls = getShelfsLinks(i)
	for j in dsls:
		print_link = getPrintableVersionLink(f"https://en.wikibooks.org{j}")
		if print_link == None:
			continue
		downloadPrintableVersion(f"https://en.wikibooks.org{print_link}", j.rsplit("/",1)[1])
