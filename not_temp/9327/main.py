from copy import deepcopy, copy
from typing import Any
import pygame
from enum import Enum
from random import randint, choice
from math import sin,cos,pi
vec2 = pygame.Vector2

pygame.init()
display = pygame.display.set_mode((1600, 900))
XMAX,YMAX = display.get_size()
clock = pygame.time.Clock()
run = True
dt = 0

mpo = pygame.mouse.get_pos()

class Action(Enum):
	NULL = 0
	MOVE = 1
	LROT = 2
	RROT = 3
	IN_FRONT_OF = 4
	GIVE_BIRTH = 5
	EAT = 6

class Food:
	def __init__(self, pos) -> None:
		self.pos = pos
	def update(self):
		pygame.draw.circle(display, (0, 0, 255), self.pos, 10)

class Blorb:
	SIZE = 20
	def __init__(self) -> None:
		self.pos = vec2(XMAX/2, YMAX/2)
		self.start_pos = self.pos.copy()
		self.angle = 0.0
		self.energy = 1800
		self.alive = True
		self.score = 0
		self.ddt = DDT()
	def update(self):
		global hovered, alive_count
		if self.alive:
			alive_count += 1
			if self.pos.distance_to(mpo) < Blorb.SIZE:
				hovered = self
			pygame.draw.circle(display, (255, 0, int(min(max(self.energy, 0), 1800))*(255/1800)), self.pos, Blorb.SIZE)
			pygame.draw.line(display, (0, 255, 0), self.pos, self.pos + vec2(cos(self.angle), -sin(self.angle)) * Blorb.SIZE)
			self.energy -= 1
			if self.ddt.update(self) and self.start_pos.distance_to(self.pos) < 2:
				self.score -= 100
			if self.energy <= 0:
				self.alive = False
			if self.pos.x < 0:
				self.pos.x = XMAX
			elif self.pos.x > XMAX:
				self.pos.x = 0
			if self.pos.y < 0:
				self.pos.y = YMAX
			elif self.pos.y > YMAX:
				self.pos.y = 0

hovered: None | Blorb = None

freg = []
outc = []
def fact(val: int):
	def wrap(f):
		freg.append(f)
	outc.append(val)
	return wrap

@fact(1)
def NULL(self: Blorb):
	return 0

@fact(1)
def MOVE(self: Blorb):
	self.pos += vec2(cos(self.angle), -sin(self.angle)) * 3.0
	# self.energy -= 0.0
	self.score += 0.1
	return 0

@fact(1)
def LROT(self: Blorb):
	self.angle += 10/180*pi
	# self.energy -= 0.3
	self.score += 0.1
	return 0

@fact(1)
def RROT(self: Blorb):
	self.angle -= 10/180*pi
	# self.energy -= 0.3
	self.score += 0.1
	return 0

@fact(2)
def IN_FRONT_OF(self: Blorb):
	RET_DICT = {
		Food: 1
	}
	check_pos = self.pos + vec2(cos(self.angle), -sin(self.angle)) * Blorb.SIZE
	self.energy -= 0.1
	self.score += 100
	pygame.draw.line(
		display,
		(255, 255, 100),
		self.pos,
		check_pos
	)
	for i in stuff:
		if vec2(i.pos).distance_to(check_pos) < Blorb.SIZE:
			self.score += 800
			return RET_DICT[type(i)]
	return 0

@fact(2)
def GIVE_BIRTH(self: Blorb):
	self.energy -= 70
	if self.energy >= 1000:
		self.energy //= 2
		bs.append(deepcopy(self))
		bs[-1].ddt.mutate_ip(degen=False)
		bs[-1].pos = self.pos + (0, Blorb.SIZE)
		bs[-1].energy = self.energy * 0.8
		self.score += 3000
		return 1
	self.score += 200
	return 0

@fact(2)
def EAT(self: Blorb):
	check_pos = self.pos + vec2(cos(self.angle), -sin(self.angle)) * Blorb.SIZE
	self.energy -= 0.3
	for i in stuff:
		if not isinstance(i, Food):
			continue
		if vec2(i.pos).distance_to(check_pos) < Blorb.SIZE:
			stuff.remove(i)
			self.energy += 250
			self.score += 20000
			return 1
	self.score += 1
	return 0

font = pygame.font.SysFont("Consolas", 30)


class Node:
	def __init__(self, action: Action):
		self.action = action
		self.next: dict[int, int] = {}
		self.strength = 1
	def getNext(self, data: Any) -> int:
		res = freg[self.action.value](data)
		self.strength = min((self.strength + 1) * (outc[self.action.value]+1), 10_000)
		if res in self.next.keys():
			return self.next[res]
		return -1
	def draw(self, pos):
		c = int(min(max(self.strength, 1), 5) * (255/5))
		pygame.draw.circle(display, (c, c, c), pos, 16)
		rdr = font.render(self.action.name[0], 0, (0, 0, 0))
		display.blit(rdr, (pos[0] - rdr.get_width()/2, pos[1] - rdr.get_height()/2))

# Dynamic Decision Tree
class DDT:
	def __init__(self):
		self.reg = [Node(Action.NULL)]
		self.current = 0
	def update(self, data: Any) -> bool:
		reseted = False
		if self.current == -1:
			self.current = 0
			reseted = True
		self.current = self.reg[self.current].getNext(data)
		return reseted
	def reroot(self, rmv_index: int):
		out_to_rmv = []
		for i in self.reg:
			out_to_rmv.clear()
			for out,idx in i.next.items():
				if idx == rmv_index:
					out_to_rmv.append(out)
					#del i.next[out]
				elif idx > rmv_index:
					i.next[out] -= 1
			for out in out_to_rmv:
				del i.next[out]
	def mutate_ip(self, degen: bool = True):
		self.current = 0
		for node_index,i in enumerate(self.reg):
			if degen:
				if i.strength < 0:
					self.reroot(node_index)
					self.reg.remove(i)
					continue
				i.strength /= 2
				if i.strength < 0.01:
					i.strength = -1
			int_action: int = i.action.value
			if len(i.next) >= outc[int_action]:
				assert len(i.next) == outc[int_action]
				continue
			for inp in range(outc[int_action]):
				if (not inp in i.next.keys()) and randint(0,1):
					self.reg.append(Node(choice(list(Action))))
					i.next[inp] = len(self.reg)-1
					return
	def draw(self, pos: tuple, index: int, depth: int = 1):
		node = self.reg[index]
		for i in range(outc[node.action.value]):
			tot = outc[node.action.value]//2
			next_pos = (
				pos[0] + (i-tot)*(200/depth),
				pos[1] + 60
			)
			pygame.draw.line(display, (100, 100, 100), pos, next_pos)
			if i in node.next.keys():
				self.draw(next_pos, node.next[i], depth + tot)
		node.draw(pos)

bs: list[Blorb] = []
stuff: list[Food] = []

BATCH_SIZE = 100
def init():
	for i in range(BATCH_SIZE):
		bs.append(Blorb())
		for n in range(10):
			bs[-1].ddt.mutate_ip(degen=False)
init()

bestie = None
bestie_score_is_better = False

def initBatchFrom(b):
	bs.clear()
	for i in range(2*BATCH_SIZE//3):
		bs.append(deepcopy(b))
		bs[-1].pos = vec2(XMAX/2, YMAX/2)
		bs[-1].ddt.mutate_ip()
	for i in range(BATCH_SIZE//3):
		bs.append(Blorb())
		for n in range(10):
			bs[-1].ddt.mutate_ip(degen=False)

rmv_ls = []
def updtAndClean(ls):
	global rmv_ls
	rmv_ls.clear()
	for n,i in enumerate(ls):
		if i.update():
			rmv_ls.append(n)
	for n,i in enumerate(rmv_ls):
		del ls[i-n]
evol = 0

for i in range(100):
	stuff.append(Food((randint(0, XMAX), randint(0, YMAX))))
STEPS_PER_FRAME = 3
while run:
	mpo = pygame.mouse.get_pos()
	keys = pygame.key.get_pressed()
	clock.tick(60)
	dt = clock.get_time()/1000
	display.fill((0, 0, 0))
	
	if len(stuff) < 200 and randint(0, 10) == 0:
		stuff.append(Food((randint(0, XMAX), randint(0, YMAX))))
	
	# hovered = None
	for i in range(STEPS_PER_FRAME):
		alive_count = 0
		updtAndClean(bs)

		if alive_count == 0:
			new_bestie = max(bs, key=lambda x: x.score)
			if bestie:
				bestie_score_is_better = new_bestie.score > bestie.score
			bestie = new_bestie
			initBatchFrom(bestie)
			evol += 1
	updtAndClean(stuff)

	display.blit(font.render(f"Evol {evol}", 0, (255, 255, 255)), (0, 0))
	if bestie:
		color = (100, 255, 100) if bestie_score_is_better else (255, 100, 100)
		display.blit(font.render(f"Bestie's score: {bestie.score}", 0, color), (0, 30))

	if keys[pygame.K_b] and bestie:
		bestie.ddt.draw((XMAX/2, 50), 0)
	elif hovered:
		hovered.ddt.draw((XMAX/2, 50), 0)


	for ev in pygame.event.get():
		if ev.type == pygame.QUIT:
			run = False
		elif ev.type == pygame.KEYDOWN:
			if ev.key == pygame.K_r:
				init()
				evol = 0
			elif ev.key == pygame.K_ESCAPE:
				run = False
	pygame.display.update()
pygame.quit()


