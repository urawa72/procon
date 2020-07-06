import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
x = list(map(int, input().split()))

ans = 1000000000
for i in range(101):
    sum = 0
    for j in x:
        sum += pow(j - i, 2)
    ans = min(ans, sum)

print(ans)
