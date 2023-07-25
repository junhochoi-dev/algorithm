sz=int(input())
halligalli = {}
for _ in range(sz):
    fruit, cnt = input().split()
    cnt=int(cnt)
    if halligalli.get(fruit) == None:
        halligalli[fruit] = cnt
    else:
        halligalli[fruit] += cnt
check = False
for key in halligalli:
    if halligalli[key] == 5:
        check = True
        break
if check: print('YES')
else: print('NO')