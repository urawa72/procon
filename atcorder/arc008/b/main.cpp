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
    int n, m; cin >> n >> m;
    string name; cin >> name;
    string kit; cin >> kit;

    map<char, int> m1, m2;
    for(int i = 0; i < n; i++){
        m1[name[i]]++;
    }
    for(int i = 0; i < m; i++){
        m2[kit[i]]++;
    }

    int ans = 1;
    for(auto p1 : m1){
        if(!m2[p1.first]){
            cout << -1 << endl;
            return 0;
        }
        if(m2[p1.first] < p1.second){
            int tmp = 0;
            if(m2[p1.first] == 1) tmp = p1.second;
            else{
                tmp = (p1.second + m2[p1.first] - 1) / m2[p1.first];
            }
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;

    return 0;
}
