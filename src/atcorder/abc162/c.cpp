#include <bits/stdc++.h>
using namespace std;

template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int calc(int i, int j, int m){
    int t = gcd(i, j);
    return gcd(t, m);
}

int main() {
    int k; cin >> k;
    ll sum = 0;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= k; j++){
            for(int m = 1; m <= k; m++){
                sum += calc(i, j, m);
            }
        }
    }
    cout << sum << endl;
}
