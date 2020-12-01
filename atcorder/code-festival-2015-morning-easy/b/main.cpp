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
    int n; cin >> n;
    string s; cin >> s;

    if(n & 1) {
        cout << -1 << endl;
        return 0;
    }

    string t = s.substr(0, n / 2);
    string u = s.substr(n / 2, n);

    int ans = 0;
    for(int i = 0; i < (int)n / 2; i++){
        if(t[i] != u[i]) ans++;
    }
    cout << ans << endl;

    return 0;
}
