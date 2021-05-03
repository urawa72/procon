#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    bool ans = true;

    int n = s.size();
    if(n == 1) return false;

    vector<char> v(10010, 'N');
    int p = 0;
    for (int i = 0; i < n; i++) {
      if(s[i] == '(' ||  s[i] == '{' || s[i] == '['){
        p++;
        v[p] = s[i];
      }else{
        if(s[i] == ')' && v[p] == '('){
          p--;
          continue;
        }
        if(s[i] == '}' && v[p] == '{'){
          p--;
          continue;
        }
        if(s[i] == ']' && v[p] == '['){
          p--;
          continue;
        }
        ans = false;
        break;
      }
    }

    if(p != 0) return false;
    return ans;
  }
};
