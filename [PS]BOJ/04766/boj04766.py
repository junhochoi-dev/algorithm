temp = []
while True:
    t = input()
    if t == '999':
        break
    temp.append(float(t))

for idx in range(1, len(temp)):
    ans = temp[idx] - temp[idx - 1]
    print(f'{ans:.2f}')