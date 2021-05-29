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
//
vector<pair<ll, ll> > prime_factorize(ll N){
    vector<pair<ll, ll> > res;
    for(ll i = 2; i * i <= N; i++){
        if(N % i != 0) continue;
        ll ex = 0;
        while(N % i == 0){
            ex++;
            N /= i;
        }
        // 素数と指数をpush
        res.push_back({i, ex});
    }
    if(N != 1) res.push_back({N, 1});
    return res;
}

int solution(int N) {
  vector<pair<ll, ll> > v = prime_factorize(N);

  ll ans = 1;
  for(auto p : v) {
    ans *= (p.second + 1);
  }
  return ans;
}

