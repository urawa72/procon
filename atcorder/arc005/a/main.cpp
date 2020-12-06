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
    V<string> v(n);

    string s1 = "TAKAHASHIKUN";
    string s2 = "Takahashikun";
    string s3 = "takahashikun";
    string s4 = "TAKAHASHIKUN.";
    string s5 = "Takahashikun.";
    string s6 = "takahashikun.";

    int ans = 0;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(s == s1 || s == s2 || s == s3) ans++;
        if(s == s4 || s == s5 || s == s6) ans++;
    }
    cout << ans << endl;


    return 0;
}
