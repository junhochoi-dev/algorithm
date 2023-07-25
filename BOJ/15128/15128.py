p1, q1, p2, q2 = map(int, input().split())

if int(p1 * p2 / q1 / q2 / 2) == p1 * p2 / q1 / q2 / 2:
	print(1)
else:
	print(0)