VERSION = "2"
MAX_FILES = 10_000

from os import listdir, mkdir, system, remove, path
from random import randint
from time import sleep
print(f"==== TEMP-CODE (v{VERSION}) ====")
__dir__ = __file__.replace("\\","/").rsplit("/",1)[0]
templates = listdir(f"{__dir__}/templates/")
for n,i in enumerate(templates):
	print(f"{n}. {i}")
cmd = None

while not cmd:
	cmd = input("Use template or extension ([0-9]+ for templates, a dot then the extension for single files):").replace("\"", "\\\"")

if cmd[0] == ".":
	n = randint(0,9999)
	folder = f"{__dir__}/not_temp/{n:#04}"
	for _ in range(MAX_FILES):
		if path.isdir(folder):
			break
		folder = f"{__dir__}/not_temp/{n:#04}"
		n+=1
	else:
		print(f"Failed to create folder, you've got over {MAX_FILES} projects !")
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

