sz = int(input())
for _ in range(sz):
    num = int(input())
    if num % 2 == 0:
        print(f'{num} is even')
    else:
        print(f'{num} is odd')