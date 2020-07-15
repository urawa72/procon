import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())

ans = 0
for i in range(1, n + 1):
    if i % 3 == 0 or i % 5 == 0:
        continue
    ans += i

print(ans)
