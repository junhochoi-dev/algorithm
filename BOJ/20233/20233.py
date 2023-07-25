import sys
input = sys.stdin.readline

a = int(input())
x = int(input())
b = int(input())
y = int(input())
T = int(input())
print(max(0, T - 30) * x * 21 + a, max(0, T - 45) * y * 21 + b)