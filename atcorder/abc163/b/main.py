import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m = map(int, input().split())
a = list(map(int, input().split()))
s = sum(a)

if s <= n:
    print(n - s)
else:
    print(-1)
