#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        sum += a;
    }
    cout << sum - n << endl;
}
