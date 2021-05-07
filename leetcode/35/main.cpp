#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    for (int i = 0; i < (int)nums.size(); i++) {
      if(nums[i] == target) return i;
    }

    nums.push_back(target);
    sort(nums.begin(), nums.end());

    for (int i = 0; i < (int)nums.size(); i++) {
      if(nums[i] == target) return i;
    }

    return 0;
  }
};
