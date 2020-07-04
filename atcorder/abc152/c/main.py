import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
p = list(map(int, input().split()))

ans = 1
mi = p[0]
for i in range(1, n):
    if p[i] <= mi:
        ans += 1
        mi = min([p[i], mi])

print(ans)
