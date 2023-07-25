sz = int(input())
board = []
for _ in range(sz):
    cn, sn, score = map(int, input().split())
    board.append([score, cn, sn])
board = sorted(board, reverse=True)
printcnt = 0
cnList = {}
for i in range(sz):
    if printcnt == 3:
        break
    cn = board[i][1]
    sn = board[i][2]
    if not cn in cnList.keys():
        cnList[cn] = 0
        print(cn, sn)
        cnList[cn] += 1
        printcnt += 1
    else:
        if cnList[cn] == 2:
            continue
        else:
            print(cn, sn)
            cnList[cn] += 1
            printcnt += 1
