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
    V<int> l(n);
    for(int i = 0; i < n; i++) cin >> l[i];
    sort(all(l));

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int a = l[i];
            int b = l[j];
            // a + bより大きい値のイテレータ
            auto ite = lower_bound(all(l), a + b);
            // 開始からj+1まで進んだイテレータを引いてカウント
            int c = ite - (l.begin() + j + 1);
            ans += c;
        }
    }
    cout << ans << endl;
}
