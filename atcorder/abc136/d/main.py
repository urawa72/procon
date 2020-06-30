import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

s = input().rstrip()

rn = ln = 0
for i in range(len(s)):
    if s[i] == 'R': rn += 1
    if s[i] == 'L': ln += 1
    if s[i - 1] != s[i]:


