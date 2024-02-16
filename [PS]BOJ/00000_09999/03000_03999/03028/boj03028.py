change = {'A': [0, 1], 'B': [1, 2], 'C': [0, 2]}
s = input()
cup = [0, 1, 1]
for ss in s:
    a = change[ss][0]
    b = change[ss][1]
    tmp = cup[a]
    cup[a] = cup[b]
    cup[b] = tmp

for idx in range(len(cup)):
    if cup[idx] == 0:
        print(idx + 1)
        break