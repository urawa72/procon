#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int strStr(string haystack, string needle) {
    int h = haystack.size();
    int n = needle.size();

    if(haystack == needle) return 0;
    if(n == 0) return 0;
    if(h == 0) return -1;
    if(h < n) return -1;

    for (int i = 0; i <= h - n; i++) {
      string t = haystack.substr(i, n);
      if(t == needle){
        return i;
      }
    }
    return -1;
  }
};
