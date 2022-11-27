n = num = int(input())
cnt = 0

while True:
    num = (num % 10) * 10 + (num % 10 + num // 10) % 10
    cnt += 1

    if num == n:
        print(cnt)
        break
