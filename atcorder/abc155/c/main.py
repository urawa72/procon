import sys
from collections import Counter

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
cnt = Counter(input() for _ in range(n))
macnt = max(cnt.values())
names = [k for k, v in cnt.items() if v == macnt]
names.sort()
print(*names, sep='\n')
