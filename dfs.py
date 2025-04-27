import sys
input = sys.stdin.readline

m = int(input())
n = int(input())

graph = [[] for _ in range(m+1)]
visited = [False] * (m+1)

for _ in range(n):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def dfs(v):
    visited[v] = True
    for i in graph[v]:
        if not visited[i]:
            dfs(i)

dfs(1)
print(visited.count(True)-1)
