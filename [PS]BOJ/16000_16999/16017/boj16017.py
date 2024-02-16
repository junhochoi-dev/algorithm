import sys
input = sys.stdin.readline

s = ''
for _ in range(4):
    s += input().rstrip()

if s[0] in '89' and s[3] in '89' and s[1] == s[2]:
    print('ignore')
else:
    print('answer')