#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, y; cin >> n >> y;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n - i; j++) {
            int k = n - i - j;
            if(y == i * 10000 + j * 5000 + k * 1000) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << "-1" << " " << "-1" << " " << "-1" << endl;
}
