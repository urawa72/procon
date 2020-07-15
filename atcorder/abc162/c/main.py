import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

k = int(input())

def gcd(a, b):
    while b: a, b = b, a % b
    return a

ans = 0
for i in range(1, k + 1):
    for j in range(1, k + 1):
        for m in range(1 , k + 1):
            ans += gcd(gcd(i, j), m)

print(ans)
