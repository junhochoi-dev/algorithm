import sys
dx = [1, 1, 1, -1, -1, -1, 0, 0]
dy = [1, 0, -1, 1, 0, -1, 1, -1]
score = {
    1: 0, 2: 0,
    3: 1, 4: 1,
    5: 2, 6: 3,
    7: 5, 8: 11,
}
board = []
longword = ""
ableword = set()
wordlist = set()
visited = [[False for i in range(4)] for j in range(4)]

def dfs(word, index, x, y):
    if board[x][y] != word[index]:
        return
    if len(word) - 1 == index and word[index] == board[x][y]:
        ableword.add(word)
        global longword
        if len(word) > len(longword):
            longword = word
        elif len(word) == len(longword) and word < longword:
            longword = word
        return

    visited[x][y] = True
    for k in range(8):
        tx = x + dx[k]
        ty = y + dy[k]
        if tx < 0 or ty < 0 or tx >= 4 or ty >= 4:
            continue
        if visited[tx][ty]:
            continue
        if board[tx][ty] != word[index + 1]:
            continue
        dfs(word, index + 1, tx, ty)
        visited[tx][ty] = False

sz = int(input())
for _ in range(sz):
    s = sys.stdin.readline().rstrip()
    wordlist.add(s)
wordlist = list(wordlist)
wordlist = sorted(wordlist)

tmpnewline = input()

tc = int(input())
for n in range(tc):
    board = []
    longword = ""
    ableword = set()
    visited = [[False for i in range(4)] for j in range(4)]
    for m in range(4):
        s = sys.stdin.readline().rstrip()
        board.append(s)
    if n != tc - 1:
        tmpnewline = sys.stdin.readline().rstrip()

    for i in range(4):
        for j in range(4):
            for w in wordlist:
                if w in ableword:
                    continue
                if w[0] > board[i][j]:
                    break
                if w[0] == board[i][j]:
                    visited = [[False for i in range(4)] for j in range(4)]
                    dfs(w, 0, i, j)
                    visited[i][j] = False

    ableword = list(ableword)
    sum = 0
    for w in ableword:
        sum += score[len(w)]
    print(sum, longword, len(ableword))
