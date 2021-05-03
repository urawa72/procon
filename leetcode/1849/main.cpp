#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool splitString(string s) {
    int n = s.size();
    for (int bit = 0; bit < (1 << n); bit++) {
      string pre = "", now = "";
      bool f = true;
      for (int i = 0; i < n; i++) {
        if(now == "" && s[i] == '0' && i != n - 1) continue;
        now += s[i];
        if (bit & 1 << i) {
          if (pre != "") {
            if(pre.size() != now.size() && pre.size() -1 != now.size()){
              f = false;
              break;
            }
            if (stoll(pre) - 1 != stoll(now)) {
              f = false;
              break;
            }
          }
          pre = now;
          now = "";
        }
      }
      if (f && pre != "" && now != "") {
        if(pre.size() == now.size() || pre.size() -1 == now.size()){
          if (stoll(pre) - 1 == stoll(now)) {
            return true;
          }
        }
      }
    }
    return false;
  }
};
