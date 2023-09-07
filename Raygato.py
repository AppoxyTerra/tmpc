APP = "Raygato"
VERSION = "1.0"

from sys import argv
import os
import shlex
from typing import Callable, Any
from inspect import signature
import json
argc = len(argv)

__dir__ = __file__.replace("\\","/").rsplit("/",1)[0]

aliases: dict[str, str] = {}
cmdreg: dict[str, Callable] = {}
usages: dict[str, str] = {}
env = "."

# ash = Automatic Syntax Help
def add(name: str, *aliases_, usage: str = "An unfinished command."):
	def wrap(f):
		cmdreg[name] = f
		usages[name] = usage
		for k in aliases_:
			aliases[k] = name
		return f
	return wrap

@add("help", 'h', '?', usage="Get this msg.")
def _help():
	print(f"{APP} Help:")
	print(f"{APP} is a utility for making games with raylib in C++.")
	print("Here are the main commands, you can use them with -h to get more help/info about them.")
	print()
	for k in cmdreg.keys():
		print(f"\t{k}\t{usages[k]}")
	print()

@add("aliases", 'al', '?=', usage="Get all aliases for a specific command.")
def _aliases(*args):
	for k,v in aliases.items():
		print(v, " : ", k)

@add("place", 'pl', '/', usage="Add a new place to the current set game (or env): place <place_name>")
def _place(name: str):
	os.system(f"cp -r {__dir__}/gmk_res/templates/place/* {env}/places")
	os.rename(f"{env}/places/name.cpp", f"{env}/places/{name}.cpp")
	os.rename(f"{env}/places/name.hpp", f"{env}/places/{name}.hpp")
	template_file(f"places/{name}.cpp", "/*{$name}*/", name)
	template_file(f"places/{name}.hpp", "/*{$name}*/", name)
	templates_file(
		"main.cpp",
		{
			"/*{$init_place}*/": f"place_{name}",
			"/*{$imports}*/": f"""\
#include \"places/{name}.hpp\"
#include \"places/{name}.cpp\"
/*{{$imports}}*/""",
		}
	)

@add("lsmod", "lsm", "lm", usage="List modules.")
def _lsmod():
	print("\n".join(os.listdir(f"{__dir__}/gmk_res/modules")))

@add("add", "mod", '+', usage="Add a module (from gmk_res/modules without the .json extension): add <module_name>")
def _add(module_name: str):
	dct = json.load(open(f"{__dir__}/gmk_res/modules/{module_name}.json"))
	for k in dct:
		if dct[k][0] == '$':
			dct[k] = open(f"{__dir__}/gmk_res/res/{dct[k]}").read()
	templates_all_files(dct)

def template_file(f: str, key: str, value: str):
	fcontent = open(f"{env}/{f}").read()
	fcontent = fcontent.replace(key, value)
	open(f"{env}/{f}","w").write(fcontent)
def templates_file(f: str, dct: dict[str, str]):
	fcontent = open(f"{env}/{f}").read()
	for key,value in dct.items():
		fcontent = fcontent.replace(key, value)
	open(f"{env}/{f}","w").write(fcontent)
def templates_files(fs: list[str], dct: dict[str, str]):
	for f in fs:
		fcontent = open(f"{env}/{f}").read()
		for key,value in dct.items():
			fcontent = fcontent.replace(key, value)
		open(f"{env}/{f}","w").write(fcontent)
def templates_all_files(dct: dict[str, str]):
	for dirpath,dirnames,filename in os.walk(env):
		templates_file(dirpath + '/' + filename, dct)

@add("init", 'new', '++', usage="Init a new game: init <game_name> <first_place_name>")
def _init(game_name: str, place_name: str):
	global env
	os.system(f"cp -r {__dir__}/gmk_res/templates/init {env}")
	os.rename("init", game_name)
	_cd(game_name)
	templates_file(
		"main.cpp",
		{
			"/*{$init_place}*/": f"place_{place_name}",
			"/*{$imports}*/": f"""\
#include \"places/{place_name}.hpp\"
#include \"places/{place_name}.cpp\"
/*{{$imports}}*/""",
		}
	)
	_place(place_name)


@add("set", 'cd', 'setgame', '=', usage="Set environement (<=> cd) from pwd: set <folder>")
def _cd(d: str):
	global env
	env = (env + '/' + d).replace("//", "/")

@add("exec", '>', usage="Run shell command in env: exec <command, ...>")
def _exec(*a):
	global env
	os.chdir(env)
	os.system(shlex.join(a))
	c = env.count('/')
	if c:
		os.chdir("../" * c)

@add("pwd", "cwd", "?/", usage="Print current directory.")
def _pwd():
	print(os.getcwd())

@add("quit", "q", usage=f"Quit {APP}.")
def _quit():
	return 1

def main(argc: int, argv: tuple[str]):
	global env
	os.system("clear")
	print(f"{APP} [v{VERSION}] type 'help' or 'h' for help.")
	print()

	while True:
		cmd = shlex.split(input(f'[{APP}] ' + env + '>'))
		if cmd[0] in aliases:
			func = cmdreg[aliases[cmd[0]]]
		elif cmd[0] in cmdreg:
			func = cmdreg[cmd[0]]
		else:
			print(f"Command '{cmd[0]}' not found (type 'help' for help).")
			continue
		try:
			if func(*cmd[1:]):
				break
		except AssertionError as e:
			print("Last command stopped because of a failed assertion:")
			print('\t', e)
		except Exception as e:
			# print(f"Last command failed with an exception at line {e.args}:")
			# print(type(e).__name__, e)
			raise e
	print()
	print(f"Thanks for using {APP}.")
		



if __name__ == "__main__":
	try:
		main(argc, argv)
	except Exception as e:
		raise e







