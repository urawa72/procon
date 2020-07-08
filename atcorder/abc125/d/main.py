import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

cnt = 0
mi = 10**9
# -の偶奇と最小値を求める
for i in range(n):
    if a[i] < 0 or a[i] == 0:
        cnt += 1
    mi = min(mi, abs(a[i]))

# 合計
sum = 0
for i in a:
    sum += abs(i)

# 奇数だったら最小値を引く
if cnt % 2 != 0:
    print(sum - mi * 2)
else:
    print(sum)
