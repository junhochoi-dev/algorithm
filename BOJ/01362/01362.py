num = 1
while True:
    die = False
    sw, rw = map(int, input().split())
    if sw == 0 and rw == 0:
        break
    while True:
        act, n = input().split()
        if act == '#' and n == '0':
            break
        n = int(n)
        if act == 'E':
            rw -= n
            if rw <= 0:
                die = True
        if act == 'F':
            rw += n
    if die:
        print(num, "RIP")
    elif sw / 2 < rw and sw * 2 > rw:
        print(num, ":-)")
    else:
        print(num, ":-(")
    num += 1