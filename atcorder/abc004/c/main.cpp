#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n; cin >> n;

    // 冗長
    // ll r = 0, s = 0;;
    // if(n < 30) r = n / 5;
    // else r = n / 5 % 6;
    // s = n % 5;
    //
    // V<int> v;
    // for(int i = r + 1; i <= 6; i++) v.push_back(i);
    // for(int i = 1; i <= r; i++) v.push_back(i);
    //
    // for(int i = 0; i <= s - 1; i++){
    //     swap(v[i], v[i + 1]);
    // }

    // 30の余りで回しても間に合う
    V<int> v = { 1, 2, 3, 4, 5, 6 };
    ll r = n % 30;
    for(int i = 0; i < r; i++){
        int p = i % 5;
        swap(v[p], v[p + 1]);
    }

    for(int i = 0; i < 6; i++){
        cout << v[i];
    }
    cout << "\n";
}
