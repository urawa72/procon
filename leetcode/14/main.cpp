#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    int n = 1e9;
    string b;
    for (int i = 0; i < (int)strs.size(); i++) {
      int t = strs[i].size();
      if(t < n){
        n = t;
        b = strs[i];
      }
    }

    string ans = "";
    for (int i = 1; i <= n; i++) {
      string tmp = b.substr(0, i);
      bool flag = true;
      for (int j = 0; j < (int)strs.size(); j++) {
        string tmp2 = strs[j].substr(0, i);
        if(tmp == tmp2) continue;
        else{
          flag = false;
          break;
        }
      }
      if(flag) ans = tmp;
    }

    return ans;
  }
};
