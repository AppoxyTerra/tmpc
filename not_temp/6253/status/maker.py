from pprint import pprint
import struct
import pygame
from tkinter.filedialog import asksaveasfile, askopenfile
from math import pi, sin, cos

RAD2DEG = 180/pi
DEG2RAD = pi/180

display = pygame.display.set_mode((1600, 900))
clock = pygame.time.Clock()
run = True
XMAX,YMAX = display.get_size()

vals = {
    "head":		[90, 1],
    "h_left":	[0, 1],
    "h_right":	[180, 1],
    "e_left":	[0, 1],
    "e_right":	[180, 1],
    "k_left":	[0, 1],
    "k_right":	[180, 1],
    "f_left":	[-60, 1],
    "f_right":	[240, 1],
}
clicked = False
spring = False
selected = None
def updateVal(name: str, pos):
	global selected
	pygame.draw.circle(display, (100, 100, 100), pos, 20, 3)
	pygame.draw.line(
		display,
		(100, 100, 255),
		pos,
		(
			pos[0] + cos(vals[name][0]*DEG2RAD)*20,
			pos[1] + -sin(vals[name][0]*DEG2RAD)*20
		)
	)
	if pygame.Vector2(mpo).distance_to(pos) <= 20 and clicked:
		selected = [name, vals[name][0], 0, mpo[1]]
	

	
LEN = 100

while run:
	mpo = pygame.mouse.get_pos()
	mpr = pygame.mouse.get_pressed()
	keys = pygame.key.get_pressed()
	clock.tick(60)
	display.fill((0, 0, 0))

	head_norm = (
		  cos(vals["head"][0]*DEG2RAD),
		- sin(vals["head"][0]*DEG2RAD)
	)

	HEAD_POS = (
		XMAX//2 + head_norm[0]*LEN,
		YMAX//2 + head_norm[1]*LEN
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		(XMAX//2, YMAX//2),
		HEAD_POS,
		5
	)
	LEFT_ELBOW = (
		XMAX//2 + head_norm[0]*LEN*(2/3) + cos(vals["e_left"][0]*DEG2RAD)*LEN*0.5,
		YMAX//2 + head_norm[1]*LEN*(2/3) - sin(vals["e_left"][0]*DEG2RAD)*LEN*0.5
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		(XMAX//2 + head_norm[0]*LEN*(2/3), YMAX//2 + head_norm[1]*LEN*(2/3)),
		LEFT_ELBOW,
		5
	)
	RIGHT_ELBOW = (
		XMAX//2 + head_norm[0]*LEN*(2/3) + cos(vals["e_right"][0]*DEG2RAD)*LEN*0.5,
		YMAX//2 + head_norm[1]*LEN*(2/3) - sin(vals["e_right"][0]*DEG2RAD)*LEN*0.5
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		(XMAX//2 + head_norm[0]*LEN*(2/3), YMAX//2 + head_norm[1]*LEN*(2/3)),
		RIGHT_ELBOW,
		5
	)

	LEFT_HAND = (
		LEFT_ELBOW[0] + cos(vals["h_left"][0]*DEG2RAD)*LEN*0.5,
		LEFT_ELBOW[1] - sin(vals["h_left"][0]*DEG2RAD)*LEN*0.5
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		LEFT_ELBOW,
		LEFT_HAND,
		5
	)
	RIGHT_HAND = (
		RIGHT_ELBOW[0] + cos(vals["h_right"][0]*DEG2RAD)*LEN*0.5,
		RIGHT_ELBOW[1] - sin(vals["h_right"][0]*DEG2RAD)*LEN*0.5
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		RIGHT_ELBOW,
		RIGHT_HAND,
		5
	)

	LEFT_KNEE = (
		XMAX//2 + cos(vals["k_left"][0]*DEG2RAD)*LEN*0.5,
		YMAX//2 - sin(vals["k_left"][0]*DEG2RAD)*LEN*0.5
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		(XMAX//2, YMAX//2),
		LEFT_KNEE,
		5
	)
	RIGHT_KNEE = (
		XMAX//2 + cos(vals["k_right"][0]*DEG2RAD)*LEN*0.5,
		YMAX//2 - sin(vals["k_right"][0]*DEG2RAD)*LEN*0.5
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		(XMAX//2, YMAX//2),
		RIGHT_KNEE,
		5
	)

	LEFT_FOOT = (
		LEFT_KNEE[0] + cos(vals["f_left"][0]*DEG2RAD)*LEN*0.5,
		LEFT_KNEE[1] - sin(vals["f_left"][0]*DEG2RAD)*LEN*0.5
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		LEFT_KNEE,
		LEFT_FOOT,
		5
	)
	RIGHT_FOOT = (
		RIGHT_KNEE[0] + cos(vals["f_right"][0]*DEG2RAD)*LEN*0.5,
		RIGHT_KNEE[1] - sin(vals["f_right"][0]*DEG2RAD)*LEN*0.5
	)
	pygame.draw.line(
		display,
		(50, 255, 50),
		RIGHT_KNEE,
		RIGHT_FOOT,
		5
	)

	updateVal("head", HEAD_POS)
	updateVal("h_left", LEFT_HAND)
	updateVal("h_right", RIGHT_HAND)
	updateVal("e_left", LEFT_ELBOW)
	updateVal("e_right", RIGHT_ELBOW)
	updateVal("k_left", LEFT_KNEE)
	updateVal("k_right", RIGHT_KNEE)
	updateVal("f_left", LEFT_FOOT)
	updateVal("f_right", RIGHT_FOOT)
	
	if selected:
		vals[selected[0]][selected[2]] = selected[1] + (mpo[1] - selected[3])

	if keys[pygame.K_LCTRL] and keys[pygame.K_s]:
		if spring:
			f = asksaveasfile(mode="wb", defaultextension="", initialdir="")
			if f:
				bstr = bytes()
				print("Serializing...")
				pprint(vals)
				bstr += struct.pack("ff", DEG2RAD*vals["head"][0], vals["head"][1])
				bstr += struct.pack("ff", DEG2RAD*vals["h_left"][0], vals["h_left"][1])
				bstr += struct.pack("ff", DEG2RAD*vals["h_right"][0], vals["h_right"][1])
				bstr += struct.pack("ff", DEG2RAD*vals["e_left"][0], vals["e_left"][1])
				bstr += struct.pack("ff", DEG2RAD*vals["e_right"][0], vals["e_right"][1])
				bstr += struct.pack("ff", DEG2RAD*vals["k_left"][0], vals["k_left"][1])
				bstr += struct.pack("ff", DEG2RAD*vals["k_right"][0], vals["k_right"][1])
				bstr += struct.pack("ff", DEG2RAD*vals["f_left"][0], vals["f_left"][1])
				bstr += struct.pack("ff", DEG2RAD*vals["f_right"][0], vals["f_right"][1])
				print("Saving...")
				f.write(bstr)
				f.close()
				print("Saved succesfuly !")
			spring = False
	elif keys[pygame.K_LCTRL] and keys[pygame.K_l]:
		if spring:
			f = askopenfile(mode="rb")
			if f:
				bstr = f.read()
				f.close()
				vals["head"] = list(struct.unpack("ff", bstr[0*4:2*4])); vals["head"][0] *= RAD2DEG
				vals["h_left"] = list(struct.unpack("ff", bstr[2*4:4*4])); vals["h_left"][0] *= RAD2DEG
				vals["h_right"] = list(struct.unpack("ff", bstr[4*4:6*4])); vals["h_right"][0] *= RAD2DEG
				vals["e_left"] = list(struct.unpack("ff", bstr[6*4:8*4])); vals["e_left"][0] *= RAD2DEG
				vals["e_right"] = list(struct.unpack("ff", bstr[8*4:10*4])); vals["e_right"][0] *= RAD2DEG
				vals["k_left"] = list(struct.unpack("ff", bstr[10*4:12*4])); vals["k_left"][0] *= RAD2DEG
				vals["k_right"] = list(struct.unpack("ff", bstr[12*4:14*4])); vals["k_right"][0] *= RAD2DEG
				vals["f_left"] = list(struct.unpack("ff", bstr[14*4:16*4])); vals["f_left"][0] *= RAD2DEG
				vals["f_right"] = list(struct.unpack("ff", bstr[16*4:18*4])); vals["f_right"][0] *= RAD2DEG
	else:
		spring = True
	
	clicked = False
	for ev in pygame.event.get():
		if ev.type == pygame.QUIT:
			run = False
		elif ev.type == pygame.MOUSEBUTTONUP:
			selected = None
		elif ev.type == pygame.MOUSEBUTTONDOWN:
			clicked = True
	pygame.display.update()
pygame.quit()
