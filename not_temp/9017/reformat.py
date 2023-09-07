from os import listdir
import re
PATH = "books/"

def subs(base_str, *pattern_replace) -> str:
    for pattern, replace in pattern_replace:
        base_str = re.sub(
            pattern,
            replace,
            base_str
		)
    return base_str

for subject in listdir(PATH):
    PATH = f"books/{subject}"
    for book in listdir(PATH):
        print(f"Reading '{book}'...", end='\r')
        full_txt = (
        open(f"{PATH}/{book}","rb")
        	.read()
            .decode(errors='ignore')
		)
        while "\n\n\n" in full_txt:
            full_txt = full_txt.replace("\n\n\n","\n\n")
        full_txt = subs(
			full_txt,
            (r"(\[[0-9]+(\.[0-9]+)*)\s*\n\s*\n\s*", "\1"),
			(r"\n\s*.\s*\n\s*"," "),
            (r"(?<=(\)|\]|\}|\(|\[|\{))\s+"," "),
            (r"\s+(?=(\)|\]|\}|\(|\[|\{))"," "),
		)
        open(f"{PATH}/{book}","wb").write(full_txt.encode('utf-8'))
        print(f"'{book}' read.\t\t")





