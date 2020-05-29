#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(ALL(a));

    // 連想配列でカウントしたか管理
    map<ll, ll> m;
    ll id = 0;
    for(int i = 0; i < n; i++){
        if(m[a[i]]) continue;
        ll tmp = a[i];
        while(tmp <= a[n - 1]){
            m[tmp] = 1;
            tmp *= 2;
        }
        id++;
    }

    cout << id << endl;
}
