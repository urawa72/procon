#include <bits/stdc++.h>

using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


class Solution {
 public:
  int solve(vector<int>& nums, int s, int e) {
    int n = nums.size();
    int dp[n];
    memset(dp, 0, sizeof(dp));
    dp[s] = nums[s];
    dp[s + 1] = max(nums[s], nums[s + 1]);
    for (int i = s + 2; i <= e; i++) {
      dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
    }
    return dp[e];
  }

  int rob(vector<int>& nums) {
    int n = nums.size();

    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    return max(solve(nums, 0, n - 2), solve(nums, 1, n - 1));
  }
};
