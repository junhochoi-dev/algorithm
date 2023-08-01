import sys
T = int(sys.stdin.readline())
asz = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
bsz = int(sys.stdin.readline())
b = list(map(int, sys.stdin.readline().split()))

adict = {a[0] : 1}
asum = [a[0]]
for i in range(1, len(a)):
    if asum[len(asum) - 1] + a[i] in adict.keys():
        adict[asum[len(asum) - 1] + a[i]] += 1
    else:
        adict[asum[len(asum) - 1] + a[i]] = 1
    asum.append(asum[len(asum) - 1] + a[i])

for i in range(asz):
    for j in range(i + 1, asz):
        if asum[j] - asum[i] in adict.keys():
            adict[asum[j] - asum[i]] += 1
        else:
            adict[asum[j] - asum[i]] = 1

bdict = {b[0] : 1}
bsum = [b[0]]
for i in range(1, len(b)):
    if bsum[len(bsum) - 1] + b[i] in bdict.keys():
        bdict[bsum[len(bsum) - 1] + b[i]] += 1
    else:
        bdict[bsum[len(bsum) - 1] + b[i]] = 1
    bsum.append(bsum[len(bsum) - 1] + b[i])

for i in range(bsz):
    for j in range(i + 1, bsz):
        if bsum[j] - bsum[i] in bdict.keys():
            bdict[bsum[j] - bsum[i]] += 1
        else:
            bdict[bsum[j] - bsum[i]] = 1

sum = 0
for k in adict.keys():
    if T - k in bdict.keys():
        sum += adict[k] * bdict[T - k]

print(sum)
