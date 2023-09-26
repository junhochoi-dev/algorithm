tc = int(input())
for _ in range(tc):
    d, f, p = map(float, input().split())
    print(f'${d*f*p:.2f}')