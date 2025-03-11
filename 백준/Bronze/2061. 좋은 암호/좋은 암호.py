K, L = map(int, input().split())
for i in range(2, L):
    if K % i == 0:
        print("BAD " + str(i))
        break
else:
    print("GOOD")