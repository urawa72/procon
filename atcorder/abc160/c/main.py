import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

k,n = map(int, input().split())
a = list(map(int, input().split()))
# 円環は一直線(a[0],a[1],a[2],..,k,k+a[0]まで)で考える
a.append(a[0] + k)

# 通らない一番大きな差を求めてkから引く
ma = 0
for i in range(n):
    ma = max(ma, a[i + 1] - a[i])
print(k - ma)
