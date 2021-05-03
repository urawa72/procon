#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int getMinDistance(vector<int>& nums, int target, int start) {
    int ans = 1e9;
    for (int i = 0; i < (int)nums.size(); i++) {
      if (nums[i] == target) {
        ans = min(ans, abs(i - start));
      }
    }
    return ans;
  }
};
