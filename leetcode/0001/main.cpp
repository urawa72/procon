#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans(2);
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if(i == j) continue;
        if(nums[i] + nums[j] == target){
          ans[0] = i;
          ans[1] = j;
        }
      }
    }
    return ans;
  }
};
