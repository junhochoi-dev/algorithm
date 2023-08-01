import math
cnt=1
while True:
    a,b,c=map(int,input().split())
    if a==0 and b==0 and c==0:
        break
    print(f'Triangle #{cnt}')
    if a==-1:
        if c**2 <= b**2:
            print('Impossible.')
        else:
            print('a = {:.3f}'.format(math.sqrt(c**2-b**2)))
    if b==-1:
        if c**2 <= a**2:
            print('Impossible.')
        else:
            print('b = {:.3f}'.format(math.sqrt(c**2-a**2)))
    if c==-1:
        print('c = {:.3f}'.format(math.sqrt(a**2+b**2)))
    cnt+=1
    print()