#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;
    V<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        // 同じ場合は進める
        while(i + 1 < n && v[i] == v[i + 1]) i++;

        // 増加・減少が続く限り進む
        if(i + 1 < n && v[i] < v[i + 1]){
            while(i + 1 < n && v[i] <= v[i + 1]) i++;
        }
        else if(i + 1 < n && v[i] > v[i + 1]){
            while(i + 1 < n && v[i] >= v[i + 1]) i++;
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}
