x,k=map(int,input().split())
if 7000*k <= x*1000:
    print(7000*k)
elif 3500*k <= x*1000:
    print(3500*k)
elif 1750*k <= x*1000:
    print(1750*k)
else:
    print(0)