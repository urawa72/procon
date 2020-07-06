#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(ALL(a), greater<ll>());
    ll ans = a[0];
    priority_queue<ll> q;
    for(int i = 1; i < n; i++){
        if(q.size() > 0){
            ll p = q.top();
            q.pop();
            ans += p;
        }
        q.push(a[i]);
        q.push(a[i]);
    }

    cout << ans << endl;

    return 0;
}

