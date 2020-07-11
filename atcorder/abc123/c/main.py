import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
li = [int(input()) for _ in range(5)]

mi = min(li)
t = (n + (mi - 1)) // mi
print(4 + t)
