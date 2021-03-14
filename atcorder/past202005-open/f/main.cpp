#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    V<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    // 文字列には整数nも含まれるためreverseは使えない
    string ans(n, '0');
    for (int i = 0; i < n / 2; i++) {
        bool ok = false;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (s[i][j] == s[n - i - 1][k]) {
                    ans[i] = s[i][j];
                    ans[n - i - 1] = s[n - 1 - i][k];
                    ok = true;
                }
            }
        }
        if (!ok) {
            cout << -1 << endl;
            return 0;
        }
    }

    if (n % 2 == 1) {
        ans[n / 2] = s[n / 2][0];
    }
    cout << ans << endl;

    return 0;
}
