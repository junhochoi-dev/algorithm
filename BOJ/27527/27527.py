import math
import sys
N, M = map(int, sys.stdin.readline().split())
l = list(map(int, sys.stdin.readline().split()))
numlist = {}
std = math.ceil(9 * M / 10)

check = False

for i in range(M):
    num = l[i]
    if num in numlist.keys():
        numlist[num] += 1
    else:
        numlist[num] = 1
    if numlist[num] >= std:
        check = True
        
for i in range(M, N):
    frontnum = l[i - M]
    backnum = l[i]
    if frontnum in numlist.keys():
        numlist[frontnum] -= 1
    else:
        numlist[frontnum] = 1
    if backnum in numlist.keys():
        numlist[backnum] += 1
    else:
        numlist[backnum] = 1
    if numlist[backnum] >= std:
        check = True
        break
if check:
    print('YES')
else:
    print('NO')