chess = [1, 1, 2, 2, 2, 8]
found = map(int, input().split())
diff = [x - y for x, y in zip(chess, found)]
print(*diff)
