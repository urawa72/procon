import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())

yen = 0
btc = 0.0
for i in range(n):
    x, u = input().split()
    if u == "JPY":
        yen += int(x)
    else:
        btc += float(x)
print(yen + btc * 380000)
