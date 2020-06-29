import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

n = int(input())
h = list(map(int, input().split()))

flag = True
for i in reversed(range(1,n)):
    if h[i-1] <= h[i]: continue
    if h[i-1]-1 <= h[i]: h[i-1] -= 1
    elif h[i] < h[i-1]-1:
        flag = False
        break

if flag: print("Yes")
else: print("No")
