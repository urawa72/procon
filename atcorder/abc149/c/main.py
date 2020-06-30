import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

def is_prime(n):
    for i in range(2, n + 1):
        if i * i > n: break
        if n % i == 0: return False
    return n != 1


x = int(input())

while 1:
    if is_prime(x):
        print(x)
        exit()
    x += 1
