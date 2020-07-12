import sys
# from collections import Counter

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

ma = max(a)
dp = [0] * (ma + 1)

for i in sorted(a):
    if 1 <= dp[i]:
        dp[i] += 1
        continue
    for j in range(1, ma // i + 1):
        dp[i * j] += 1

ans = 0
for i in a:
    if dp[i] == 1:
        ans += 1
print(ans)

# a = sorted(a)
# cnt = Counter(a)
#
# s = set()
# for i in range(n):
#     # a[i]が既に列挙した数に含まれていたらスルー
#     if a[i] in s:
#         continue
#     # a[i]が2個以上存在する場合は列挙する数に含める
#     if cnt[a[i]] >= 2:
#         s.add(a[i])
#     # a[i]を除くa[i]の倍数を列挙
#     for j in range(2,10**6//a[i]+1):
#         s.add(a[i]*j)
#
# ans = 0
# for i in range(n):
#     if a[i] in s:
#         continue
#     ans += 1
#
# print(ans)
