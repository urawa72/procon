#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;


int main() {
    map<int, int> m;
    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        m[x]++;
    }

    for(auto p : m) {
        if (p.second == 2 || p.second == 3) continue;
        else {
            cout << "No" << endl;
            return 0;
        }

    }
    cout << "Yes" << endl;

    return 0;
}
