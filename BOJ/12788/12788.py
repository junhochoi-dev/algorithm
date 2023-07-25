sz=int(input())
team, member = map(int, input().split())
pens = list(map(int, input().split()))
pens = sorted(pens, reverse=True)
sum = 0
cnt = 0
check = True
for pen in pens:
    sum += pen
    cnt += 1
    if sum >= team * member:
        print(cnt)
        check = False
        break
if check:
    print('STRESS')