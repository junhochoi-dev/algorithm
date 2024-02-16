while True:
    num = input()
    if num == '0':
        break
    while True:
        print(num, end=' ')
        if len(num) == 1:
            break
        sum = 1
        for i in range(len(num)):
            sum *= ord(num[i]) - ord('0')
        num = str(sum)
    print()