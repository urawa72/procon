#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    V<V<int>> c(n, V<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> c[i][j];
    }

    // c[i][0]の最小値を求める
    int am = 1000000001;
    for (int i = 0; i < n; i++) {
        if (c[i][0] < am) {
            am = c[i][0];
        }
    }

    // aはc[i][0]と最小値の差
    V<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = c[i][0] - am;
    }

    V<int> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = c[0][i] - a[0];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] + b[j] == c[i][j]) continue;
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            cout << a[i] << ' ';
        else
            cout << a[i] << endl;
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            cout << b[i] << ' ';
        else
            cout << b[i] << endl;
    }

    return 0;
}
