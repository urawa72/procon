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


// int solution(vector<int> &A) {
//   map<int, int> mp;
//   for (int i = 0; i < (int)A.size(); i++) {
//     mp[A[i]]++;
//   }
//
//   int ans = 0;
//   for(auto p : mp){
//     if(p.second % 2 != 0){
//       ans = p.first;
//       break;
//     }
//   }
//   return ans;
// }
