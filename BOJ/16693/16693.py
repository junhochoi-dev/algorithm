from math import pi
A1, P1 = map(int, input().split())
R1, P2 = map(int, input().split())
if A1 / P1 < (R1 ** 2) * pi / P2:
    print('Whole pizza')
else:
    print('Slice of pizza')