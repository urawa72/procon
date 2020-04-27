#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        sum += r - l + 1;
    }
    cout << sum << endl;
}
