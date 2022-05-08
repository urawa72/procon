#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    int a = x;

    vector<int> v;
    while (a != 0) {
      v.push_back(a % 10);
      a /= 10;
    }

    long y = 0;
    int j = 0;
    int n = v.size();
    for (int i = n - 1; 0 <= i; i--) {
      y += v[i] * pow(10, j);
      j++;
    }

    if (x == y)
      return true;
    else
      return false;
  }
};
