tc = int(input())
for _ in range(tc):
    n = int(input())
    s,t = map(int, input().split())
    cnts = 0
    cntt = 0
    while n != 0:
        if n % 2 != 0:
            n -= 1
            cnts += 1
        else:
            if n // 2 * s < t:
                cnts += n // 2
            else:
                cntt += 1
            n //= 2
    print(cnts * s + cntt * t)