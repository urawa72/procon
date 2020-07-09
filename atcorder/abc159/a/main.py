import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m = map(int, input().split())

sum = n * (n - 1) // 2
if 1 < m:
    sum += m * (m - 1) // 2
print(sum)
