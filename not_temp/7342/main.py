from copy import copy

tokens = "=:"

def load_split(line: str):
	res = [""]
	inp = ""
	for i in line:
		if inp:
			if i == '(':
				inp += i
			elif i == ')':
				inp = inp[:-1]
			else:
				res[-1] += i
		else:
			if i == '(':
				inp += i
			elif i in tokens:
				res.append(i)
				res.append("")
			else:
				res[-1] += i
	res = [i.strip() for i in res]
	while "" in res:
		res.remove("")
	return res


class ExprAssoc:
	def __init__(self, base_expr: str) -> None:
		self.expr:str = base_expr
		self.assocs: list[str] = []
	def assoc(self, next_: str):
		self.assocs.append(next_)
	def __hash__(self) -> int:
		return hash(self.expr)
	def __repr__(self) -> str:
		return f"{repr(self.expr)}:{self.assocs}"

LOAD = """
a = b
b = c
c = a
"""

def load_expr(loader: str):
	for i in loader.split("\n"):
		spl = load_split(i)
		if len(spl) == 0:
			continue
		if spl[1] == "=":
			for i in rules:
				if i.expr == spl[0]:
					i.assoc(spl[2])
			else:
				e = ExprAssoc(spl[0])
				rules.append(e)
				e.assoc(spl[2])

rules: list[ExprAssoc] = []



def _develop(original_expr: str, max_steps: int):
	if max_steps <= 0:
		return [original_expr]
	expr = original_expr.split(" ")
	results = []
	for rule in rules:
		for assoc in rules.assocs:
			combinations = []
			# FIXME - the check is made to late and there are useless loops for meaning less combinations
			for combination in range(1, 2**len(expr)):
				this_combination = []
				for n,key in enumerate(expr):
					# NOTE - Fixed some of the problematic cases.
					if key != rule.expr and combination&(~n) != 0:
						this_combination = copy()
						break
					elif key != rule.expr:
						continue
					if combinations&(1<<n):
						this_combination.append(assoc)
	return results

def develop(expr: str, max_steps: int):
	res = list(_develop(expr, max_steps))
	return " ".join(res)

load_expr(LOAD)
print(develop("a b c", 2))


