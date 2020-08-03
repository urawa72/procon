#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    string s; cin >> s;

    reverse(ALL(s));
    int odd = 0, even = 0;
    for(int i = 0; i < (int)s.size(); i++){
        if(i % 2 == 0) odd += (s[i] - '0');
        else even += (s[i] - '0');
    }

    cout << even << ' ' << odd << endl;

    return 0;
}
