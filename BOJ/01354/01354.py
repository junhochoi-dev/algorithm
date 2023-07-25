dict = {0 : 1}

def infseq(N, P, Q, X, Y):
    a = N // P - X
    b = N // Q - Y
    if N <= 0:
        return 1
    if N in dict.keys():
        return dict[N]
    if not a in dict.keys():
        dict[a] = infseq(a, P, Q, X, Y)
    if not b in dict.keys():
        dict[b] = infseq(b, P, Q, X, Y)
    dict[N] = dict[a] + dict[b]
    return dict[N]

N, P, Q, X, Y = map(int, input().split())

print(infseq(N, P, Q, X, Y))
