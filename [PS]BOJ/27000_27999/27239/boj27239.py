n=int(input())
if n % 8 == 0:
    print(chr(ord('a') - 1 + n % 8 + 8), end='')
else:
    print(chr(ord('a') - 1 + n % 8), end='')
if n % 8 == 0:
    print(n // 8)
else:
    print(n // 8 + 1)