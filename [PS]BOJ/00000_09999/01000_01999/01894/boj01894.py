while True:
    try:
        arr = list(map(float, input().split()))
        d1 = arr[0:2]
        d2 = arr[2:4]
        d3 = arr[4:6]
        d4 = arr[6:8]
        if d1 == d3:
            d1, d2 = d2, d1
        elif d1 == d4:
            d1, d2 = d2, d1
            d3, d4 = d4, d3
        elif d2 == d4:
            d3, d4 = d4, d3
        c = [(d1[0] + d4[0]) / 2, (d1[1] + d4[1]) / 2]
        print(f'{2*c[0]-d2[0]:.3f} {2*c[1] -d2[1]:.3f}')
    except:
        break