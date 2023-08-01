import math
rh, rv, sh, sv = map(int, input().split())
sz = int(input())
min_price = 1000000000
for i in range(sz):
    rhi, rvi, shi, svi, pi = map(int, input().split())
    horizontal = max(math.ceil(rh / rhi), math.ceil(sh / shi))
    vertical = max(math.ceil(rv / rvi), math.ceil(sv / svi))
    min_price = min(min_price, horizontal * vertical * pi)

    horizontal = max(math.ceil(rh / rvi), math.ceil(sh / svi))
    vertical = max(math.ceil(rv / rhi), math.ceil(sv / shi))
    min_price = min(min_price, horizontal * vertical * pi)
print(min_price)