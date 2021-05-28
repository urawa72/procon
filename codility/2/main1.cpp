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

vector<int> solution(vector<int> &A, int K) {
  int N = A.size();
  V<int> tmp(210, -10000);
  for (int i = 0; i < N; i++) {
    if(i + K < N){
      tmp[i + K] = A[i];
    }else{
      tmp[i + K - ((i + K) / N) * N] = A[i];
    }
  }
  V<int> ans;
  for(auto n : tmp) {
    if(n == -10000) continue;
    ans.push_back(n);
  }

  return ans;
}
