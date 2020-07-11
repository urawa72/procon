import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

li = [int(input()) for _ in range(5)]
k = int(input())

ans = False
for i in range(5):
    for j in range(i + 1, 5):
        if li[j] - li[i] > k:
            ans = True
            break

if ans:
    print(":(")
else:
    print("Yay!")
