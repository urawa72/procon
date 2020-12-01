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

bool is_prime(int n) {
    for(int i = 2; i < n; i++){
        if(n < i * i) break;
        if(n % i == 0) return false;
    }
    return n != 1;
}

int main() {
    int n; cin >> n;

    int ans = 0;
    for(int i = 1; i < n; i++){
        if(is_prime(i)) ans++;
    }
    cout << ans << endl;

    return 0;
}
