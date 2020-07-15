import sys
from fractions import gcd
# from heapq import heapify, heappop, heappush
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

g = a[0]
for i in range(1, n):
    g = gcd(g, a[i])
print(g)

# heapify(a)
# while len(a) != 1:
#     f = heappop(a)
#     s = heappop(a)
#     s %= f
#     if s != 0:
#         heappush(a, s)
#     heappush(a, f)
# print(heappop(a))
