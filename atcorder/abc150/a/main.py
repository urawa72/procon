import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

k, x = map(int, input().split())

if k * 500 >= x: print("Yes")
else: print("No")
