#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1) continue;
        while(a[i] % 2 != 1){
            sum++;
            a[i] /= 2;
        }
    }
    cout << sum << endl;
}

