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
    V<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // bから順番に取り除いてaが作れるか判定する
    // v[i]がiより小さいことはありえないはず
    V<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = v.size() - 1; 0 <= j; j--){
            if(v[j] == j + 1){
                ans.push_back(v[j]);
                v.erase(v.begin() + j);
                break;
            }
        }
    }

    if((int)ans.size() != n){
        cout << -1 << endl;
    }else{
        reverse(ALL(ans));
        for(auto m : ans) cout << m << endl;
    }

    return 0;
}
