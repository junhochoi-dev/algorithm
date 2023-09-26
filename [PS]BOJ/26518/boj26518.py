b,c,a1,a2=map(int, input().split())
k=a2/a1
for i in range(100000):
    k = (1 / k) * c + b
print(k)