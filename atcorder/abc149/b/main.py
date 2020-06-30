import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

a, b, k = map(int, input().split())

x = y = 0
if a < k: x = 0
elif k < a:
    print(a - k, b)
    exit(0)
else: x = k - a

k -= a
if b < k: y = 0
else: y = b - k

print(x, y)
