import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
s = input()

num = int(s, 2) # 元の2進数を数字に
opc = s.count('1') # 元の2進数のpopcount

# ±1したpopcountで余りを求めておく
if opc > 1:
    num1 = num % (opc - 1)
else:
    num1 = 0
num0 = num % (opc + 1)

for i in range(n):
    if s[i] == '1':
        if opc == 1:
            print(0)
            continue
        tmp = (num1 - pow(2, n - 1 - i, opc - 1)) % (opc - 1)
    else:
        tmp = (num0 + pow(2, n - 1 - i, opc + 1)) % (opc + 1)

    # binで2進数にしてpopcount求める
    ans = 1
    while tmp > 0:
        tmp %= bin(tmp).count('1')
        ans += 1
    print(ans)
