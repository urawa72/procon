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
    string t; cin >> t;
    if(s.size() != t.size()){
        cout << -1 << endl;
        return 0;
    }

    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s == t){
            cout << i << endl;
            return 0;
        }
        char c = s[n - 1];
        s.pop_back();
        s.insert(s.begin(), c);
    }

    cout << -1 << endl;

    return 0;
}
