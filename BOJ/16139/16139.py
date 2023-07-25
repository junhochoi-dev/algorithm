import sys
input = sys.stdin.readline

s = input()
sz = int(input())
acc_sum = [[] for _ in range(26)]
for i in range(len(s)):
    for j in range(26):
        if ord(s[i]) - ord('a') == j:
            if i == 0:
                acc_sum[j].append(1)
            else:
                acc_sum[j].append(acc_sum[j][i - 1] + 1)
        else:
            if i == 0:
                acc_sum[j].append(0)
            else:
                acc_sum[j].append(acc_sum[j][i - 1])

for _ in range(sz):
    alp, s, e = input().split()
    s = int(s)
    e = int(e)
    if s == 0:
        print(acc_sum[ord(alp)-ord('a')][e])
    else:
        print(acc_sum[ord(alp) - ord('a')][e] - acc_sum[ord(alp)-ord('a')][s - 1])
    #print(acc_sum[ord(alp)-ord('a')][s] - acc_sum[ord(alp)-ord('a')][e])
