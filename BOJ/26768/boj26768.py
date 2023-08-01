w = { 'a': 4, 'e': 3, 'i': 1, 'o': 0, 's': 5, }
s = input()
for a in s:
    if a in w.keys():
        print(w[a], end='')
    else:
        print(a, end='')