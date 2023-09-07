import pygame
import struct
from tkinter.filedialog import asksaveasfile, askopenfile

pygame.init()
display = pygame.display.set_mode((1600, 900))
clock = pygame.time.Clock()
run = True
mpo = pygame.mouse.get_pos()
mpr = pygame.mouse.get_pressed()
keys = pygame.key.get_pressed()


while run:
	clock.tick(60)
	mpo = pygame.mouse.get_pos()
	mpr = pygame.mouse.get_pressed()
	keys = pygame.key.get_pressed()
	display.fill((0, 0, 0))



	for ev in pygame.event.get():
		if ev.type == pygame.QUIT:
			run = False

	pygame.display.update()
pygame.quit()