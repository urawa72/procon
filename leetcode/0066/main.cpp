#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    vector<int> ans;
    int n = digits.size();
    bool f = true;
    for (int i = n - 1; 0 <= i ; i--) {
      if(f && digits[i] == 9){
        ans.push_back(0);
        f = true;
      }else{
        if(f) ans.push_back(digits[i] + 1);
        else ans.push_back(digits[i]);
        f = false;
      }
    }
    if(f) ans.push_back(1);
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
