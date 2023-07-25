s=input()
prev = -1
one = 0
zero = 0
for k in s:
    if prev != k:
        if k == '1':
            one += 1
        if k == '0':
            zero += 1
    prev = k
print(min(one, zero))