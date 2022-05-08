#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    if (nums.size() == 0) return 0;
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] != val){
        nums[j] = nums[i];
        j++;
      }
    }
    return j + 1;
  }
};
