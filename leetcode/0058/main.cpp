#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int lengthOfLastWord(string s) {
    // return mySolution(s);
    return otherSolution(s);
  }

  int mySolution(string s) {
    int n = s.size();
    reverse(s.rbegin(), s.rend());
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0 && s[i] == ' ') {
        while (s[i] == ' ') i++;
      }
      if (i < n && s[i] != ' ')
        ans++;
      else
        break;
    }
    return ans;
  }

  int otherSolution(string s) {
    int ans = 0;
    for (int i = s.size() - 1; 0 <= i; i--) {
      if (0 < ans && s[i] == ' ') break;
      if (s[i] != ' ') ans++;
    }
    return ans;
  }
};
