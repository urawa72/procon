import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

a = [list(map(int, input().split())) for _ in range(3)]
n = int(input())
b = [int(input()) for _ in range(n)]


for i in range(n):
    for j in range(3):
        for k in range(3):
            if a[j][k] == b[i]:
                a[j][k] = 0

flag = False
if a[0][0] == 0 and a[0][1] == 0 and a[0][2] == 0:
    flag = True
if a[1][0] == 0 and a[1][1] == 0 and a[1][2] == 0:
    flag = True
if a[2][0] == 0 and a[2][1] == 0 and a[2][2] == 0:
    flag = True
if a[0][0] == 0 and a[1][0] == 0 and a[2][0] == 0:
    flag = True
if a[0][1] == 0 and a[1][1] == 0 and a[2][1] == 0:
    flag = True
if a[0][2] == 0 and a[1][2] == 0 and a[2][2] == 0:
    flag = True
if a[0][0] == 0 and a[1][1] == 0 and a[2][2] == 0:
    flag = True
if a[0][2] == 0 and a[1][1] == 0 and a[2][0] == 0:
    flag = True

if flag: print("Yes")
else: print("No")
