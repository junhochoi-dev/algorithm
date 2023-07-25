str = input()
list = []
for i in range(len(str)):
    list.append(str[i:])
list.sort()
for i in range(len(str)):
    print(list[i])