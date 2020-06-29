import sys
# from collections import Counter, deque
# from collections import defaultdict
# from itertools import combinations, permutations, accumulate, groupby, product
# from bisect import bisect_left,bisect_right
# from heapq import heapify, heappop, heappush
# from math import floor, ceil,pi,factorial
# from operator import itemgetter
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9 + 7

n = int(input())

ans = 0
for i in range(1,n+1):
    if 1 <= i and i <= 9: ans += 1
    if 100 <= i and i <= 999: ans += 1
    if 10000 <= i and i <= 99999: ans += 1

print(ans)
