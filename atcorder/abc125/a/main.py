import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

a,b,t = map(int, input().split())

sum = 0
time = 0
while True:
    time += a
    if t < time:
        break
    sum += b

print(sum)
