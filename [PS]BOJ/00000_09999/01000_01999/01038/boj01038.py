dict = {}
cnt = 0
def func(s, size):
    global cnt
    if size == len(s):
        dict[cnt] = int(s)
        cnt += 1
        return
    for i in range(10):
        if s == '':
            if i == 0 and size != 1:
                continue
            func(s + str(i), size)
        elif int(s[len(s) - 1]) > i:
            func(s + str(i), size)

for sz in range(1, 11):
    func('', sz)

n = int(input())
#for k in range(len(dict)):
#    print(k, dict[k])
if n > 1022:
    print(-1)
else:
    print(dict[n])