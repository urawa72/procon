import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n, r = map(int, input().split())

if n >= 10:
    print(r)
else:
    print(r + 100 * (10 - n))
