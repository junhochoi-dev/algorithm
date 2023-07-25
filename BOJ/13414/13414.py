sz, cnt = map(int, input().split())
order = []
dict = {}
for _ in range(cnt):
    num = input()
    order.append(num)
    dict[num] = len(order) - 1
j = 1
for i in range(len(order)):
    if i == dict[order[i]]:
        print(order[i])
        if j == sz:
            break
        j += 1