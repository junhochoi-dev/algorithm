n = int(input())
sumRC = 10000
row = 0
col = 0
for i in range(1, n + 1):
	for j in range(i, n + 1):
		if i * j >= n:
			if i + j <= sumRC:
				sumRC = i + j
				row = i
				col = j
				
print(row, col)