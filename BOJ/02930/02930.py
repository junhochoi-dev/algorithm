score = {'win' : ['SP', 'PR', 'RS'], 'lose' : ['PS', 'RP', 'SR'], 'draw' : ['SS', 'RR', 'PP']}
sz = int(input())
sanggeun = input()
tc = int(input())
opponent = []
for _ in range(tc):
    opponent.append(input())
sanggeunscore = 0
for o in opponent:
    for idx in range(sz):
        tar = sanggeun[idx] + o[idx]
        if tar in score['win']:
            sanggeunscore += 2
        if tar in score['draw']:
            sanggeunscore += 1
        if tar in score['lose']:
            sanggeunscore += 0

maxscore = 0
for idx in range(sz):
    r = s = p = 0
    for o in range(tc):
        tar = opponent[o][idx]
        if tar == 'R':
            r += 1
        if tar == 'S':
            s += 1
        if tar == 'P':
            p += 1
    arr = []
    arr.append(s * 2 + r)
    arr.append(p * 2 + s)
    arr.append(r * 2 + p)
    maxscore += max(arr)
print(sanggeunscore)
print(maxscore)
