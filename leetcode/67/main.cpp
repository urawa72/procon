#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
 public:
  string addBinary(string a, string b) {
    string ans = "";
    int an = a.size();
    int bn = b.size();
    int n = max(an, bn);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    bool f = false;
    for (int i = 0; i < n; i++) {
      if(i < an && i < bn){
        if(a[i] == '1' && b[i] == '1'){
          if(f) ans += '1';
          else ans += '0';
          f = true;
        }else if(a[i] == '1' || b[i] == '1'){
          if(f) ans += '0';
          else ans += '1';
        }else{
          if(f) ans += '1';
          else ans += '0';
          f = false;
        }
      }else{
        if(n == bn){
          if(f){
            if(b[i] == '0'){
              ans += '1';
              f = false;
            }else{
              ans += '0';
            }
          }else{
            ans += b[i];
          }
        }else{
          if(f){
            if(a[i] == '0'){
              ans += '1';
              f = false;
            }else{
              ans += '0';
            }
          }else{
            ans += a[i];
          }
        }
      }
    }

    if(f) ans += '1';
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
