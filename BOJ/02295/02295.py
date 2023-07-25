import sys
sz = int(sys.stdin.readline())
num = []
dict = set()
for _ in range(sz):
    n = int(sys.stdin.readline())
    num.append(n)
    dict.add(n)

maximum = 0
for i in range(sz):
    for j in range(i, sz):
        for k in range(j, sz):
            tmp = num[i] + num[j] + num[k]
            if tmp in dict:
                maximum = max(maximum, tmp)

print(maximum)
