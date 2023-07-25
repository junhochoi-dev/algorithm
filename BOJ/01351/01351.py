dict = {0 : 1}

def infseq(N, P, Q):
    if N in dict.keys():
        return dict[N]
    if not N // P in dict.keys():
        dict[N // P] = infseq(N // P, P, Q)
    if not N // Q in dict.keys():
        dict[N // Q] = infseq(N // Q, P, Q)
    dict[N] = dict[N // P] + dict[N // Q]
    return dict[N]

N, P, Q = map(int, input().split())

print(infseq(N, P, Q))
