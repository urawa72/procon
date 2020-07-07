import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m = map(int, input().split())
sc = [list(map(int, input().split())) for _ in range(m)]

for i in range(1000):
    flag = True
    for s in sc:
        num = str(i)
        if len(num) >= s[0] and str(s[1]) == num[s[0] - 1]:
            continue
        else:
            flag = False
            break
    if flag and len(str(i)) == n:
        print(i)
        exit()

print(-1)
