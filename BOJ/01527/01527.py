import itertools
kms = [4, 7]
s, e = map(int, input().split())
kms_list = []
for i in range(1, 10):
    permutation = itertools.product(kms, repeat=i)
    for j in permutation:
        tmp = 0
        for k in range(len(j)):
            tmp += j[k] * (10 ** k)
        kms_list.append(tmp)
kms_list = sorted(kms_list)
cnt_s = 0
cnt_e = 0

for i in range(len(kms_list) - 1):
    if kms_list[i] < s and s <= kms_list[i + 1]:
        cnt_s = i + 1

for i in range(len(kms_list) - 1):
    if kms_list[i] <= e and e < kms_list[i + 1]:
        cnt_e = i + 1

if s > kms_list[-1]:
    print(0)
elif e >= kms_list[-1]:
    cnt_e = len(kms_list)
    print(cnt_e - cnt_s)
else:
    print(cnt_e - cnt_s)