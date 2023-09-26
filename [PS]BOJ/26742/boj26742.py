s = input()
b = 0
c = 0
for a in s:
    if a == 'B':
        b += 1
    if a == 'C':
        c += 1
print(b//2 + c//2)