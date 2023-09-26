S = int(input())
A = int(input())
B = int(input())

cnt = 0
if (S - A) % B > 0 and S > A:
    cnt += 1
if (S - A) // B > 0:
    cnt += (S - A) // B

print(250 + cnt * 100)