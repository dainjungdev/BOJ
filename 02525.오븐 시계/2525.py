a, b = map(int, input().split())
c = int(input())

b += c
m = b % 60
h = (a + (b // 60)) % 24

print(h, m)
