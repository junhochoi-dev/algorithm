import sys
b = 0
s = 0
sz=int(input())
str=sys.stdin.readline()
idx = 0
for i in range(sz):
    if str[idx]=='b':
        b += 1
        idx += 7
    elif str[idx]=='s':
        s += 1
        idx += 8
if b > s:
    print('bigdata?')
elif s > b:
    print('security!')
else:
    print('bigdata? security!')