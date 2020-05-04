#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<string> A(n), B(m);
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < m; i++) cin >> B[i];

    bool ans = false;
    // マスを二重ループで一致しているか判定
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // 場外にでたらダメ
            if(i + m - 1 >= n || j + m - 1 >= n) continue;
            bool flag = true;
            for(int k = 0; k < m; k++){
                for(int l = 0; l < m; l++){
                    // 一致してなかったらダメ
                    if(A[i + k][j + l] != B[k][l]) flag = false;
                }
            }
            if(flag) ans = true;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
