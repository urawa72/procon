#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    int n = s.size();
    ll ans = 0;
    for(int bit = 0; bit < (1 << (n - 1)); bit++){
        ll cur = 0;
        for(int i = 0; i < n; i++){
            cur = cur * 10 + (s[i] - '0');
            if(bit & (1 << i)){
                ans += cur;
                cur = 0;
            }
        }
        ans += cur;
    }
    cout << ans << endl;
}
