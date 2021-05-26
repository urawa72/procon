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


int main() {
  int n, x; cin >> n >> x;

  int mi = 1e9, ma = 0;
  for (int i = 0; i < n; i++) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(x < a) {
      mi = min(b, mi);
      ma = max(b, ma);
    }else{
      int tmp = d;
      if(x - a == 0) tmp += b;
      else tmp += b + (x - a) / c * d;
      mi = min(tmp, mi);
      ma = max(tmp, ma);
    }
  }

  cout << mi << ' ' << ma << endl;

  return 0;
}
