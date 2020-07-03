import sys

input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

c = input().rstrip()
ords = ord(c)
ords += 1
chars = chr(ords)
print(chars)
