import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
memo = [[0 for _ in range(10)] for _ in range(10)]

for i in range(1, n + 1):
    s = str(i)
    le = len(s)
    t1 = s[0]
    t2 = s[le - 1]
    memo[int(t1)][int(t2)] += 1

ans = 0
for i in range(1, 10):
    for j in range(1, 10):
        ans += memo[i][j] * memo[j][i]

print(ans)
