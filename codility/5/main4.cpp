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
  long long z = 0, o = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] == 0)
      z++;
    if (A[i] == 1)
      o++;
  }

  long long ans = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] == 0) {
      ans += o;
    } else {
      o--;
    }
  }

  if (1e9 < ans) {
    return -1;
  } else {
    return ans;
  }
}
