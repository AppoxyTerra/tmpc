import pygame

display = pygame.display.set_mode((1600, 900))
clock = pygame.time.Clock()
run = True



while run:
	clock.tick(60)
	display.fill((0, 0, 0))
	
	for ev in pygame.event.get():
		if ev.type == pygame.QUIT:
			run = False
	pygame.display.update()
pygame.quit()


