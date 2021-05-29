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

int solution(string &S) {
  int n = S.size();

  bool ok = true;
  if (n == 1)
    return 0;

  vector<char> v(200010, 'N');
  int p = 0;
  for (int i = 0; i < n; i++) {
    if (S[i] == '(' || S[i] == '{' || S[i] == '[') {
      p++;
      v[p] = S[i];
    } else {
      if (S[i] == ')' && v[p] == '(') {
        p--;
        continue;
      }
      if (S[i] == '}' && v[p] == '{') {
        p--;
        continue;
      }
      if (S[i] == ']' && v[p] == '[') {
        p--;
        continue;
      }
      ok = false;
      break;
    }
  }

  if (ok)
    return 1;
  else
    return 0;
}
