sz=int(input())
num=list(map(int, input().split()))
numlist = list(set(num))
numlist.sort()
numdict = {}
for k in range(len(numlist)):
    numdict[numlist[k]] = k

for k in num:
    print(numdict[k], end=' ')