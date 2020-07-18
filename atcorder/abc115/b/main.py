import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
p = []
for i in range(n):
    x = int(input())
    p.append(x)

ma = max(p)
s = sum(p)

print(s - ma + ma // 2)
