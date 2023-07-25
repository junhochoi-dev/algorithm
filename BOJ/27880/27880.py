ans = 0
for _ in range(4):
    method, val = input().split()
    val = int(val)
    if method == 'Es':
        ans += 21 * val
    else:
        ans += 17 * val
print(ans)