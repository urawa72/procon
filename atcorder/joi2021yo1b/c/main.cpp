#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    V<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    int ma = 0, p = 0;
    for (int i = 0; i < n; i++) {
        if (ma < A[i]) {
            ma = A[i];
            p = i;
        }
    }

    V<int> sum(n + 2, 0);
    for (int i = 0; i < n; i++) {
        sum[i + 1] = sum[i] + A[i];
    }
    sum[n + 1] = sum[n];

    cout << sum[p] << endl;
    cout << sum[n + 1] - sum[p + 1] << endl;

    return 0;
}
