import sys

input = sys.stdin.readline

x = int(input())  # price on receipt
n = int(input())  # number of products

for _ in range(n):
    a, b = map(int, input().split())
    x -= a * b

print("Yes" if x == 0 else "No")
