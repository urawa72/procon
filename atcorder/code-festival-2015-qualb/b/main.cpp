#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n,m; cin >> n >> m;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        mp[a]++;
    }

    for(auto p : mp){
        if(p.second > n / 2){
            cout << p.first << endl;
            return 0;
        }
    }
    cout << '?' << endl;

    return 0;
}
