dict = {}
for a in range(1, 100 + 1):
    dict[a**3] = a

l = []
for b in range(2, 100 + 1):
    for c in range(b, 100 + 1):
        for d in range(c, 100 + 1):
            ans = b**3 + c**3 + d**3
            if ans in dict.keys():
                l.append([dict[ans], b, c, d])


l.sort()

for s in l:
    print(f'Cube = {s[0]}, Triple = ({s[1]},{s[2]},{s[3]})')