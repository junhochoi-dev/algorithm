s=1
for i in range(int(input())):
    s*=i+1
    s%=10**9+7
print(s)