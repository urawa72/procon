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

int solution(int N) {
  vector<int> v;
  while(N != 0){
    v.push_back(N % 2);
    N /= 2;
  }

  int ans = 0;
  int l = v.size();
  for (int i = 0; i < l; i++) {
    if(v[i] == 1){
      int cnt = 0;
      while(1){
        i++;
        if(i == l) break;
        if(v[i] == 0) cnt++;
        else{
          ans = max(ans, cnt);
          i--;
          break;
        }
      }
    }
  }
  return ans;
}
