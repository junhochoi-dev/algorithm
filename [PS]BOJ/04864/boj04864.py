while True:
    num = int(input())
    if num == 0:
        break
    sum = 0
    ccnt = 0
    n = 1
    check = False
    while True:
        cnt = 0
        for _ in range(n):
            sum += n
            cnt += 1
            ccnt += 1
            if ccnt == num:
                check = True
                break
        if check:
            break
        n += 1
    print(num, sum)