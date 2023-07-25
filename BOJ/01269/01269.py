sza, szb = map(int, input().split())
a = set(map(int, input().split()))
b = list(map(int, input().split()))
print(len(a) + len(b) - len(a.intersection(b)) * 2)