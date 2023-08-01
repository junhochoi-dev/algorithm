n=input()
c = 0
u = 0
for i in n:
    if i == ':':
        c += 1
    if i == '_':
        u += 1
print(len(n) + c + u * 5)