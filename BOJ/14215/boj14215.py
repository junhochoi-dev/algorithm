side = list(map(int, input().split()))
side = sorted(side)
if side[0] + side[1] <= side[2]:
    print((side[0] + side[1]) * 2 - 1)
else:
    print(sum(side))