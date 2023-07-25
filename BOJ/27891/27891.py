dict = ['northlondo', 'branksomeh','koreainter', 'stjohnsbur']
NLCS = set()
BHA = set()
KIS = set()
SJA = set()

for i in range(26):
    tmp = ''
    for j in range(10):
        if ord(dict[0][j]) + i > 122:
            tmp += chr(ord(dict[0][j]) + i - 26)
        else:
            tmp += chr(ord(dict[0][j]) + i)
    NLCS.add(tmp)


for i in range(26):
    tmp = ''
    for j in range(10):
        if ord(dict[1][j]) + i > 122:
            tmp += chr(ord(dict[1][j]) + i - 26)
        else:
            tmp += chr(ord(dict[1][j]) + i)
    BHA.add(tmp)


for i in range(26):
    tmp = ''
    for j in range(10):
        if ord(dict[2][j]) + i > 122:
            tmp += chr(ord(dict[2][j]) + i - 26)
        else:
            tmp += chr(ord(dict[2][j]) + i)
    KIS.add(tmp)


for i in range(26):
    tmp = ''
    for j in range(10):
        if ord(dict[3][j]) + i > 122:
            tmp += chr(ord(dict[3][j]) + i - 26)
        else:
            tmp += chr(ord(dict[3][j]) + i)
    SJA.add(tmp)

s = input()
if s in NLCS:
    print('NLCS')
if s in BHA:
    print('BHA')
if s in KIS:
    print('KIS')
if s in SJA:
    print('SJA')