ax1, ay1, ax2, ay2 = map(int, input().split())
bx1, by1, bx2, by2 = map(int, input().split())
print(max((max(ax2, bx2) - min(ax1, bx1)), (max(ay2, by2) - min(ay1, by1))) ** 2)