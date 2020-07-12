import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

mod = 10**9+7
def comb(n, k):
    c = 1
    for i in range(k):
        c *= n - i
        c %= mod
    d = 1
    for i in range(1, k + 1):
        d *= i
        d %= mod
    return (c * pow(d, mod - 2, mod)) % mod


x,y = map(int, input().split())

if (x + y) % 3 != 0:
    print(0)
    exit()

# youtube解説解答
# n = (x + y) // 3
# x -= n
# y -= n
# if x < 0 or y < 0:
#     print(0)
#     exit()
# print(comb(x + y, x))

# x = 2a + b
# y = a + 2b
# 連立方程式を解いてa,bを求める
# あとはa+bCaの経路組合の問題
a = (2 * x - y) // 3
b = (-x + 2 * y) // 3
if a < 0 or b < 0:
    print(0)
    exit()
print(comb(a + b, a))
