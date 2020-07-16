import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
g = [[] for _ in range(n)]

for i in range(n - 1):
    g[a[i] - 1].append(i)

for i in range(n):
    print(len(g[i]))
