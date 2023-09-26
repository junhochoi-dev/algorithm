N = int(input())
s = input()
if s[-1] == 'G':
    print(s[:len(s) - 1])
else:
    print(f'{s}G')