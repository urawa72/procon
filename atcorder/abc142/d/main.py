import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

def gcd(a, b):
    while b: a, b = b, a % b
    return a

def prime_factorize(m):
    pf = {}
    for i in range(2, int(m**0.5) + 1):
        while m % i == 0:
            pf[i] = pf.get(i, 0) + 1
            m //= i
    if m > 1: pf[m] = 1
    return pf

a,b = map(int, input().split())
g = gcd(a,b)
pf = prime_factorize(g)
print(len(pf.keys()) + 1)
