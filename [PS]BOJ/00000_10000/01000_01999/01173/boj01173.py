import sys
N, m, M, T, R = map(int, sys.stdin.readline().split())
time, exercise = 0, 0
pulse = m
while exercise < N:
    if m + T > M:
        break
    if pulse + T <= M:
        pulse += T
        exercise += 1
    else:
        pulse -= R
        if pulse < m:
            pulse = m
    time += 1
if exercise==N:
    print(time)
else:
    print(-1)

# 70! 95! 120! 145 130 115! 140 125 110!