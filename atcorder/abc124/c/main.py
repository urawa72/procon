import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = input().rstrip()

li = ['0'] * len(s)
for i in range(len(s)):
    li[i] = s[i]

ans = 0
for i in range(1, len(s)):
    if li[i-1] != li[i]:
        continue
    else:
        if li[i] == '1':
            li[i] = '0'
        else:
            li[i] = '1'
        ans += 1
print(ans)
