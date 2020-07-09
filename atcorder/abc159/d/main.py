import sys
from collections import Counter

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

c = Counter(a)
keys = c.keys()
comb = 0
for i in keys:
    comb += c[i] * (c[i] - 1) // 2

for i in a:
    print(comb - (c[i] - 1))

# c = Counter(a)
# c2 = [i[1] for i in c.items() if i[1] >= 2]
# sum = 0
# for i in c2:
#     sum += i * (i - 1) // 2
#
# for i in a:
#     if c[i] - 1 >= 2:
#         tmp = sum - c[i] * (c[i] - 1) // 2
#         tmp += (c[i] - 1) * (c[i] - 2) // 2
#         print(tmp)
#     else:
#         tmp = sum - c[i] * (c[i] - 1) // 2
#         print(tmp)
