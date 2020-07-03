import sys

input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

n, k, m = map(int, input().split())
a = list(map(int, input().split()))
s = sum(a)

for i in range(k + 1):
    if (s + i) // n >= m:
        print(i)
        exit()

print(-1)
