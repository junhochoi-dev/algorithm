year = []
problem = []
for _ in range(3):
    p, y, n = input().split()
    year.append(y)
    problem.append([int(p), n])
year = sorted(year)
problem = sorted(problem, reverse=True)
ans_y = ''
ans_n = ''
for _ in range(3):
    ans_y += str(int(year[_]) % 100)
    ans_n += problem[_][1][0]
print(ans_y)
print(ans_n)