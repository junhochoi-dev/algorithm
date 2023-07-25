while True:
    s = input()
    if s == '#':
        break
    sum = 0
    for i in range(len(s)):
        if s[i] >= 'A' and s[i] <= 'Z':
            sum += (ord(s[i]) - ord('A') + 1) * (i+1)
    print(sum)