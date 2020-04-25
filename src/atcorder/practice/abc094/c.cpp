#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n; cin >> n;
    vector<ll> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    // 元の配列ととっておく
    y = x;
    sort(all(y));
    // 中央値の候補は2つ
    ll m1 = y[n / 2 - 1]; // 小さい方
    ll m2 = y[n / 2]; // 大きい方
    for(int i = 0; i < n; i++){
        // m2より小さい値が消されたらm2が
        // m2以上の値が消されたらm1が中央値になる
        if(x[i] < m2) cout << m2 << endl;
        else cout << m1 << endl;
    }
}
