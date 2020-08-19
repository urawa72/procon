#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m, k; cin >> n >> m >> k;

    // ボタンを押すパターンを全探索して総数を求める
    // 自解答は解答例を展開した式
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            int sum = i * (m - j) + j * (n - i);
            // int sum = i * m + j * n - 2 * j * i;
            if(sum == k){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
