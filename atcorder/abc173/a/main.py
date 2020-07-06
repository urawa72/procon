import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())

if n % 1000 == 0:
    print(0)
else:
    a = 1000
    while a < n:
        a += 1000
    print(a - n)
