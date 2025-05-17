for _ in range(int(input())):
    m, n = map(int, input().split())
    bucket = []
    id = 0
    arr = [list(map(int, input().split())) for _ in range(n)]
    for i in range(m):
        k = 1
        for j in range(n):
            k *= arr[j][i]
        bucket.append(k)
    mx = max(bucket)
    for i in range(m):
        if bucket[i] == mx:
            id = i + 1
    print(id)
