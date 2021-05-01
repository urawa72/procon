#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int reverse(int x) {
    string s = to_string(x);
    int n = s.size();
    if (x < 0) {
      s = s.substr(1, n - 1);
    }
    long sum = 0;
    cout << s << endl;
    for (int i = 0; i < (int)s.size(); i++) {
      sum += (s[i] - '0') * pow(10, i);
    }

    if(x < 0) sum *= -1;

    if(sum < pow(-2, 31) || pow(2, 31) - 1 < sum){
      return 0;
    }else{
      return sum;
    }
  }
};
