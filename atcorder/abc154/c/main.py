import sys
from collections import defaultdict

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

# set
s = list(set(a))
if len(s) == n:
    print("YES")
else:
    print("NO")

# 辞書
# d = defaultdict(int)
# for i in a:
#     d[i] += 1
# for i in a:
#     if d[i] > 1:
#         print("NO")
#         exit()
# print("YES")
