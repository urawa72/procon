import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m,c = map(int, input().split())
b = list(map(int, input().split()))
a = [list(map(int, input().split())) for _ in range(n)]

ans = 0
for i in range(n):
    tmp = 0
    for j in range(m):
        tmp += b[j] * a[i][j]
    tmp += c
    if tmp > 0:
        ans += 1

print(ans)
