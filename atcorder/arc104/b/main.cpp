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

    // 相補的 == Zero Sum
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x = 0, y = 0;
        for(int j = i; j < n; j++){
            if(s[j] == 'A') x++;
            if(s[j] == 'T') x--;
            if(s[j] == 'G') y++;
            if(s[j] == 'C') y--;
            if(x == 0 && y == 0) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
