#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll n, l; cin >> n >> l;
    string s; cin >> s;

    ll ans = 0, cnt = 1;
    for(int i = 0; i < n; i++){
        if(s[i] == '+') cnt++;
        else cnt--;
        if(l < cnt){
            ans++;
            cnt = 1;
        }
    }
    cout << ans << endl;

    return 0;
}
