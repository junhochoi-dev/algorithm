n = int(input())
str = [
    ' @@@   @@@ ',
    '@   @ @   @',
    '@    @    @',
    '@         @',
    ' @       @ ',
    '  @     @  ',
    '   @   @   ',
    '    @ @    ',
    '     @     ',
]
for s in str:
    print(s, end='')
    for _ in range(n-1):
        print(' ', end='')
        print(s, end='')
    print()