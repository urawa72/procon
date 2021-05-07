#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    // return mySolution(nums);
    return otherSolution(nums);
  }

  int mySolution(vector<int>& nums) {
    int n = nums.size();
    vector<long> sums(n + 1);
    for (int i = 0; i < n; i++) {
      sums[i + 1] = sums[i] + nums[i];
    }

    long ans = -1e10 - 1;
    for (int i = 0; i <= n; i++) {
      for (int j = i + 1; j <= n; j++) {
        long tmp = sums[j] - sums[i];
        ans = max(ans, tmp);
      }
    }
    return ans;
  }

  // Kadane’s Algorithm
  // 最大部分配列
  int otherSolution(vector<int>& nums) {
    int ma = INT_MIN, cur = 0;
    for (int i = 0; i < (int)nums.size(); i++) {
      cur += nums[i];
      if(ma < cur) ma = cur;
      if(cur < 0) cur = 0;
    }
    return ma;
  }
};
