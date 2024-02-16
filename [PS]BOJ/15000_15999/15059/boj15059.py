ca, ba, pa = map(int, input().split())
cr, br, pr = map(int, input().split())
ans = 0
if cr - ca > 0:
    ans += cr - ca
if br - ba > 0:
    ans += br - ba
if pr - pa > 0:
    ans += pr - pa
print(ans)