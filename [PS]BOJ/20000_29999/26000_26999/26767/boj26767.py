n = int(input())
for i in range(n):
    num = i + 1
    if num % 7 == 0 and num % 11 == 0:
        print('Wiwat!')
    elif num % 7 != 0 and num % 11 == 0:
        print('Super!')
    elif num % 7 == 0 and num % 11 != 0:
        print('Hurra!')
    else:
        print(num)