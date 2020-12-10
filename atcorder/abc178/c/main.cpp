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
ll MOD = 1e9 + 7;

ll mod_pow(ll x, ll a){
    ll res = 1;
    for(int i = 0; i < a; i++){
        res = res * x % MOD;
    }
    return res;
}

int main() {
    ll n; cin >> n;

    // 包除原理
    // 9と0が含まれる = 全て - 9含まない - 0含まない + 9も0も含まない
    cout << mod_pow(10, n) - (mod_pow(9, n) + mod_pow(9, n) - mod_pow(8, n)) << endl;

    return 0;
}
