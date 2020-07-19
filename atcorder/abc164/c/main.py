import sys

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())

se = set()
for i in range(n):
    s = input().rstrip()
    se.add(s)

print(len(se))
