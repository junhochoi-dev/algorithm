group = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
btn, wait = map(int, input().split())
s = input()
time = 0
prev = '#'
for curr in s:
    if curr == ' ':
        time += btn
        prev = curr
        continue
    groupnum = -1
    for idx in range(len(group)):
        if curr in group[idx]:
            groupnum = idx
            if prev in group[idx]:
                time += wait
    time += btn * (ord(curr) - ord(group[groupnum][0]) + 1)
    prev = curr
print(time)