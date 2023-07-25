tdict = {}
def func(a, b, c):
    token = str(a) + ' ' + str(b) + ' ' + str(c)
    if token in tdict.keys():
        return tdict[token]
    
    if a <= 0 or b <= 0 or c <= 0:
        if not token in tdict.keys():
            tdict[token] = 1
    elif a > 20 or b > 20 or c > 20:
        if not token in tdict.keys():
            tdict[token] = func(20, 20, 20)
    elif a < b and b < c:
        if not token in tdict.keys():
            tdict[token] = func(a, b, c-1) + func(a, b-1, c-1) - func(a, b-1, c)
    else:
        if not token in tdict.keys():
            tdict[token] = func(a-1, b, c) + func(a-1, b-1, c) + func(a-1, b, c-1) - func(a-1, b-1, c-1)
    return tdict[token]

while True:
    a, b, c = map(int, input().split())
    if a == -1 and b == -1 and c == -1:
        break
    print(f'w({a}, {b}, {c}) = {func(a, b, c)}')



