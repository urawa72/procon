import sys
from itertools import permutations
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

n = int(input())
p = list(map(int, input().split()))
q = list(map(int, input().split()))

cnt = 1
a = 0
b = 0
t = [i for i in range(1, n + 1)]
for v in permutations(t):
    v = list(v)
    if p == v: a = cnt
    if q == v: b = cnt
    cnt += 1

print(abs(a - b))
