// include headers {{{
#define _USE_MATH_DEFINES
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <initializer_list>
#include <iomanip>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
// }}}

int solution(vector<int> &A) {
  int n = A.size();
  int d = 0;
  if (n & 1) d = (n + 1) / 2;
  else d = n / 2 + 1;

  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[A[i]]++;
  }

  int ans = -1;
  for(auto p : mp) {
    if(d <= p.second){
      for (int i = 0; i < n; i++) {
        if(p.first == A[i]){
          ans = i;
          break;
        }
      }
    }
  }
  return ans;
}
