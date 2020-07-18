import sys
from collections import defaultdict

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = int(input())
dic = defaultdict(int)
dic[s] += 1
cnt = 1
while True:
    if s % 2 == 0:
        s //= 2
    else:
        s = 3 * s + 1
    cnt += 1
    dic[s] += 1
    if dic[s] > 1:
        print(cnt)
        exit()
