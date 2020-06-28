import sys
# from collections import Counter, deque
# from collections import defaultdict
from itertools import accumulate
from bisect import bisect_right
# from heapq import heapify, heappop, heappush
# from math import floor, ceil,pi,factorial
# from operator import itemgetter
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9 + 7

n, m, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

aa = list(accumulate([0]+a))
bb = list(accumulate([0]+b))

ans = 0
for i in range(len(aa)):
    sub = k-aa[i]
    cnt = 0
    if 0 <= sub:
        cnt += i
        t = bisect_right(bb, sub)
        if 0 < t: cnt += t-1
    ans = max(ans, cnt)

print(ans)
