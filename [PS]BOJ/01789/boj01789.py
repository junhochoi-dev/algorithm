def nsum(n):
    return (n * (n + 1)) // 2
num = int(input())
for n in range(1, num + 1):
    #print(n, nsum(n))
    if nsum(n) <= num and num < nsum(n + 1):
        print(n)
        break