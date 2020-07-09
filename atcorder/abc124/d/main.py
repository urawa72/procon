import sys

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,k = map(int, input().split())
s = input()

ans = 0
cnt = 0 # 0の区間のカウント
right = 1

# 尺取法
for left in range(0, n):
    if left == 0 and s[left] == '0':
        cnt += 1

    # 0から1に変わったら0区間のカウントを減らす
    if left > 0 and s[left] == '1' and s[left - 1] == '0':
        cnt -= 1

    while right <= n - 1:
        # 1から0に変わってcntがk未満ならcnt増やしてrを進める
        if s[right] == '0' and s[right - 1] == '1':
            if cnt < k:
                cnt += 1
            else:
                break
        right += 1

    ans = max(ans, right - left)

print(ans)
