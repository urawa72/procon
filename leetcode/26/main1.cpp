#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int pre = 0;
    int sum = nums.size();
    int cnt = 0;
    for (auto ite = nums.begin(); ite != nums.end();) {
      if(ite == nums.begin()){
        pre = *ite;
        ite++;
      }else if(pre == *ite){
        ite = nums.erase(ite);
        cnt++;
      }else{
        pre = *ite;
        ite++;
      }
    }

    return sum - cnt;
  }
};
