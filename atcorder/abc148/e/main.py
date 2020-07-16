import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())

if n & 1:
    print(0)
    exit()

ans = 0
n //= 2
while n:
    ans += n // 5
    n //= 5
print(ans)
