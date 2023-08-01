N = int(input())
if N == 1:
    print(1)
elif N == 2:
    print(2)
else:
    n1 = 2;
    n2 = 1;
    for i in range(N - 2):
        n0 = (n1 + n2) % 10
        n2 = n1 % 10
        n1 = n0 % 10
    print(n0)
