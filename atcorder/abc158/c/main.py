import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

a,b = map(int, input().split())

e = 0.08
t = 0.1

for i in range(1, 1000+1):
    if int(i * e) == a and int(i * t) == b:
        print(i)
        exit()

print(-1)
