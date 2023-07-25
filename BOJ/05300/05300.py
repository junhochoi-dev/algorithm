n=int(input())
for i in range(n):
    print(i+1,end=' ');
    if((i + 1) % 6 == 0 or i == n-1):
        print('Go!', end=' ')