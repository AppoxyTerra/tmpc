VERSION = "2"
MAX_FILES = 10_000

def scope(f):
	f()
	return f

from os import listdir, mkdir, system, remove, path
from random import randint
from time import sleep
import json
import platform
import re
print(f"==== TEMP-CODE (v{VERSION}) ====")
__dir__ = __file__.replace("\\","/").rsplit("/",1)[0]
if not path.isdir(f"{__dir__}/not_temp"):
	mkdir(f"{__dir__}/not_temp")
templates = listdir(f"{__dir__}/templates/")


filters_data = json.load(open(f"{__dir__}/osfilters.json"))

filt_funcs = {}
def filt_func(name: str):
	def wrapper(f):
		filt_funcs[name] = f
		return f
	return wrapper

filt_func("startswith")(str.startswith)
filt_func("endswith")(str.endswith)
@filt_func("regex")
def filter_regex(inp: str, regx: str):
	return bool(re.match(regx, inp))

@scope
def filter_templates():
	# Store all exclusion filters
	exclude_thens = []
	for i in filters_data:
		for cond, output in i["if"].items():
			if getattr(platform, cond)() == output:
				break
		else:
			exclude_thens.append(i["then"])
	rmv_ls = []
	# Apply exclusion filters
	for t in templates:
		for excl in exclude_thens:
			for filt_name, filt_f in filt_funcs.items():
				if filt_name in excl and filt_f(t, excl[filt_name]):
					rmv_ls.append(t)
					break
			else:
				continue
			break
	for i in rmv_ls:
		templates.remove(i)


for n,i in enumerate(templates):
	print(f"{n}. {i}")
cmd = None
while not cmd:
	cmd = input("Use template or extension ([0-9]+ for templates, a dot then the extension for single files):").replace("\"", "\\\"")

if cmd[0] == ".":
	n = randint(0,9999)
	folder = f"{__dir__}/not_temp/{n:#04}"
	for _ in range(MAX_FILES):
		if not path.isdir(folder):
			break
		n+=1
		folder = f"{__dir__}/not_temp/{n:#04}"
	else:
		print(f"Failed to create folder, you've got over {MAX_FILES} projects !")
		input("Press enter to quit.")
		quit(1)
	mkdir(folder)
	f = open(f"{folder}/main{cmd}","w")
	f.write("\n"*10)
	f.close()
	system(f"code {folder}")
elif cmd.isnumeric() and 0 <= int(cmd) <= len(templates):
	folder = f"{__dir__}/not_temp/{randint(1000,9999)}"
	idx = int(cmd)
	mkdir(folder)
	system(f"cp -r \"{__dir__}/templates/{templates[idx]}/\"* \"{folder}\"/")
	system(f"code {folder}")
else:
	print("Unknown command.")
	input("")
	quit(1)
try:
	print("Press CTRL+C to get to the end menu.")
	while True:
		sleep(1000)
except KeyboardInterrupt:
	inp = input("Do you want to remove what you just made (y/n, default:n):")
	if inp == "y":
		remove(folder)
quit(0)

