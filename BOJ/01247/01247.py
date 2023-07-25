for i in range(3):
    sum = 0
    sz = int(input())
    for j in range(sz):
        sum += int(input())
    if sum > 0:
        print('+')
    elif sum < 0:
        print('-')
    else:
        print(0)