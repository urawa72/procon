import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

li = [int(input()) for _ in range(5)]
ma = 0
s = 0
for i in li:
    tmp = ((i + (10 - 1)) // 10) * 10
    s += tmp
    ma = max(ma, abs(i - tmp))

print(s - ma)
