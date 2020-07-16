import sys

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m = map(int, input().split())
x = list(map(int, input().split()))

x.sort()
dis = [0] * (m)
for i in range(1, m):
    dis[i] = abs(x[i] - x[i - 1])
dis.sort()

ans = 0
for i in range(1, m - n + 1):
    ans += dis[i]
print(ans)
