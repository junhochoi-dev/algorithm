from sys import stdin
from itertools import product

p = []
for i in range(2,10):
    l = []
    for j in product([True, False], repeat=i - 1):
        l.append(list(j))
    p.append(l)

def equation1(s, m):
    sum = 0
    for i in range(len(s)):
        sum += (ord(s[i]) - ord('0')) ** m
    return sum

def equation2(s):
    equ_list = []
    if len(s) == 1:
        equ_list.append(int(s))
        return equ_list
    for plus in p[len(s) - 2]:
        sum = 0
        tmp = s[0]
        for i in range(len(plus)):
            if plus[i]:
                tmp += s[i+1]
            else:
                sum += int(tmp)
                tmp = s[i+1]
        sum += int(tmp)
        equ_list.append(sum)
    return equ_list

def zeroone(s):
    for k in range(len(s)):
        if not (s[k] == '0' or s[k] == '1'):
            return False
    return True

sz = int(stdin.readline().strip())
inf = [10**k for k in range(10)]
answer = ""
while sz:
    sz -= 1
    n = stdin.readline().strip()

    if zeroone(n):
        answer += 'Hello, BOJ 2023!' + '\n'
        continue

    if int(n) in inf:
        answer += 'Hello, BOJ 2023!' + '\n'
        continue

    l = equation2(n)
    maximum = max(l)
    m = 1
    cnt = 0
    while True:
        v = equation1(n, m)
        if v > maximum:
            break
        if v in l:
            cnt += 1
        m += 1
    answer += str(cnt) + '\n'
print(answer)
