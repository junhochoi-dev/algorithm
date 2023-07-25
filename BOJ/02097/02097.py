import math
N = int(input())
s = math.sqrt(N)
if N < 4:
    print(4)
else:
    if s == int(s):
        print(int((s-1)*4))
    else:
        s = int(s)
        if N - s ** 2 > s:
            print(s*4)
        else:
            print(4*s - 2)