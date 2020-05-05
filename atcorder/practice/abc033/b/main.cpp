#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n; cin >> n;
    map<string, ll> m;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        ll num; cin >> num;
        m[s] = num;
        sum += num;
    }

    for(auto p : m){
        if(sum / 2 < p.second){
            cout << p.first << endl;
            return 0;
        }
    }
    cout << "atcoder" << endl;
}
