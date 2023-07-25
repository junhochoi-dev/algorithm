sz=int(input())
l=list(map(int,input().split()))
sum = 0
for i in range(sz-1):
    sum += abs(2*(l[i]**2+l[i+1]**2))
print(sum)