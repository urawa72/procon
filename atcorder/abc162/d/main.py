import sys
from collections import Counter

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
s = input().rstrip()

cnt = Counter(s)
R = cnt['R']
G = cnt['G']
B = cnt['B']

cnt = 0
for i in range(n):
    for j in range(1, n):
        if n <= i + j * 2:
            break
        if s[i] != s[i + j] and s[i + j] != s[i + 2 * j] and s[i] != s[i + 2 * j]:
            cnt += 1

print(R*G*B-cnt)
