import sys
N, K = map(int, sys.stdin.readline().split())
l = list(map(int, sys.stdin.readline().split()))

sumlist = {0: 1}
sum = 0
cnt = 0

for i in range(len(l)):
    sum += l[i]
    if sum - K in sumlist.keys():
        cnt += sumlist[sum - K]

    if sum in sumlist.keys():
        sumlist[sum] += 1
    else:
        sumlist[sum] = 1

print(cnt)