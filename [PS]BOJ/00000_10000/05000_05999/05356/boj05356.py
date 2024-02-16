tc = int(input())
for _ in range(tc):
    n, alphabet = input().split()
    n = int(n)

    for cnt in range(n):
        print(alphabet * (cnt + 1))
        if alphabet == 'Z':
            alphabet = 'A'
        else:
            alphabet = chr(ord(alphabet) + 1)
    print()