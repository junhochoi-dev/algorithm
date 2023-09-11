A, B = map(int, input().split())
K, X = map(int, input().split())
print("IMPOSSIBLE" if B < K - X or K + X < A else min(B, K + X) - max(A, K - X) + 1)