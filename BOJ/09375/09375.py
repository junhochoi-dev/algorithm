tc = int(input())
for _ in range(tc):
    sz = int(input())
    if sz == 0:
        print(0)
        continue
    l = {}
    for k in range(sz):
        name, kind = input().split()
        if l.get(kind) == None:
            l[kind] = set()
            l[kind].add(name)
        else:
            l[kind].add(name)
    sum = 1
    for k in l.keys():
        sum *= len(l[k]) + 1
    print(sum - 1)