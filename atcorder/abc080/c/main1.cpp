#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<vector<int> > f(n, vector<int>(10));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            cin >> f[i][j];
        }
    }
    vector<vector<ll> > p(n, vector<ll>(11));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 11; j++){
            cin >> p[i][j];
        }
    }

    // あらかじめ最低値-10^7を設定しておく
    ll ans = -(1 << 30);
    // bit全探索で2^10のパターン試す
    for(int bit = 1; bit < (1 << 10); bit++){
        int cc = 0;
        for(int i = 0; i < n; i++){
            int c = 0;
            // bit列が1で店舗も1だったら店舗カウントをインクリメント
            for(int j = 0; j < 10; j++){
                if(bit & (1 << j) && f[i][j]) c++;
            }
            // 店舗カウント数に応じた利益
            cc += p[i][c];
        }
        // 最大の値を設定する
        if(ans < cc) ans = cc;
    }
    cout << ans << endl;
}
