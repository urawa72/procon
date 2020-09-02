#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

ll n;
V<ll> h, s;

bool f(ll mid){
    V<int> cnt(n);
    // 割られた時の風船の高度がすべてmid以下か判定
    // midより高いhがあったらNG
    for(int i = 0; i < n; i++){
        if(mid < h[i]) return false;
        else cnt[min(n - 1, (mid - h[i]) / s[i])]++;
    }
    // 割れる風船の数を求めておく
    for(int i = 0; i < n - 1; i++){
        cnt[i + 1] += cnt[i];
    }
    // i秒以内に割れる風船がi+1個以内であること
    for(int i = 0; i < n; i++){
        if(i + 1 < cnt[i]) return false;
    }
    return true;
}

int main() {
    cin >> n;
    h.resize(n);
    s.resize(n);
    for(int i = 0; i < n; i++) cin >> h[i] >> s[i];

    ll l = -1, r = 1e18;
    while(1 < r - l){
        ll mid = (r + l) / 2;
        if(f(mid)) r = mid;
        else l = mid;
    }
    cout << r << endl;

    return 0;
}
