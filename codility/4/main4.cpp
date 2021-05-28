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
  sort(A.begin(), A.end());
  bool flag = true;
  int cnt = 1;
  for (int i = 0; i < n; i++) {
    if (A[i] != cnt) {
      flag = false;
      break;
    } else {
      cnt++;
    }
  }

  if (flag) {
    return 1;
  } else {
    return 0;
  }
}
