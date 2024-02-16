pi = 3.141592
tc = int(input())
for _ in range(tc):
    a1, p1 = map(int, input().split())
    r1, p2 = map(int ,input().split())
    a2 = r1 * r1 * pi
    print('Slice of pizza' if p1 / a1 < p2 / a2 else 'Whole pizza')