import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
ma = len(str(n))

ans = 0
def dfs(stack):
    global ans
    if len(stack) > ma:
        return
    if len(stack) >= 3:
        num = int(''.join(map(str, stack)))
        if stack.count(3) and stack.count(5) and stack.count(7) and num <= n:
            ans += 1
    for i in [3,5,7]:
        stack.append(i)
        dfs(stack)
        stack.pop(-1)
    return ans

stack = []
print(dfs(stack))
