import pygame
import pygame.gfxdraw as gfx
from random import randint

display = pygame.display.set_mode((1600, 900))
clock = pygame.time.Clock()
run = True


while run:
	clock.tick(60)
	for i in range(100):
		gfx.filled_circle(
			display,
			randint(0, 1600),
			randint(0, 900),
			randint(5, 25),
			(0, randint(0, 1)*255, 0, 5)
		)
	
	for ev in pygame.event.get():
		if ev.type == pygame.QUIT:
			run = False
	pygame.display.update()
pygame.quit()


