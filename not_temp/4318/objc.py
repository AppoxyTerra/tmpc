from sys import argv
import struct
from os import path
from random import randint

f = open(argv[1],"r")
text = f.read()
f.close()

out_path = path.dirname(argv[1])

outbin = bytes()
vs = []
tris = []
colors = []

for n,line in enumerate(text.split("\n")):
    if not line:
        continue
    if line[0] == '#':
        continue
    code = line.split(' ')
    match code:
        case ('o', *elements):
            pass
        case ('s', *elements):
            pass
        case ('v', a, b, c):
            a,b,c = float(a), float(b), float(c)
            vs.extend((a,b,c))
        case ('f', a, b, c):
            a,b,c = int(a), int(b), int(c)
            tris.append((a-1,b-1,c-1))
        case ('fc', r, g, b):
            r,g,b = int(r), int(g), int(b)
            colors.append((r,g,b, 255))
        case ('fc+r', r, g, b):
            r,g,b = int(r), int(g), int(b)
            c = randint(-10,10)
            colors.append(((r+c)%255,(g+c)%255,(b+c)%255, 255))
        case ('fc', r, g, b, a):
            r,g,b,a = int(r), int(g), int(b), int(a)
            colors.append((r,g,b,a))
        case _:
            print(f"Unknown command at line {n+1} (ignored).")

# Two u16, which are size indicator
print(f"Read {len(vs)} verticies and {len(tris)} triangles.")
outbin += struct.pack("HH", len(vs)//3, len(tris))
outbin += struct.pack("f" * len(vs), *vs)
for n,i in enumerate(tris):
    outbin += struct.pack("HHHBBBB", *i, *colors[n])

f = open(argv[1].rsplit('.',1)[0], 'wb')
f.write(outbin)
f.close()
print(f"'{argv[1]}' compiled succesfully.")