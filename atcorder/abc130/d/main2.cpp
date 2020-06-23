#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    ll n, k; cin >> n >> k;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // しゃくとり法
    ll ans = 0, sum = 0, r = 0;
    for(int l = 0; l < n; l++){
        while(r < n && sum < k){
            sum += a[r];
            r++;
        }
        if(k <= sum){
            if(n != r){
                ans += (n - r + 1);
            }else{
                ans++;
            }
        }
        if(r == l) r++;
        else sum -= a[l];
    }
    cout << ans << endl;



    return 0;
}
