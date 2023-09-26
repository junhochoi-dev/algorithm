a,b,c=map(int, input().split())
print(max(max(a,b),c) * 3 - a - b - c)