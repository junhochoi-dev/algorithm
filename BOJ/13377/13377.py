dict = {}
cnt = 0
a = [False for _ in range(9)]
def func(s):
    global cnt
    if len(s) == 9:
        cnt += 1
        dict[s] = cnt
        return
    for i in range(9):
        if a[i] == False:
            s += chr(ord('a') + i)
            a[i] = True
            func(s)
            s = s[:len(s) - 1]
            a[i] = False

func('')

sz = int(input())
for _ in range(sz):
    s = input()
    print(dict[s])
