n=int(input())
k = 1
sum = 0
while True:
    if 5 ** k > n:
        break
    sum += n // (5 ** k)
    k += 1
print(sum)