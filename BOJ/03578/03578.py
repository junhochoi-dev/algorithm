n=int(input())
if n == 0:
    print(1)
elif n == 1:
    print(0)
else:
    if n % 2 == 1:
        print(4, end='')
    print('8'*(n//2))
