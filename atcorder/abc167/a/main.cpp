#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    string t; cin >> t;

    int n = t.size();
    if(s + t[n - 1] == t) cout << "Yes" << endl;
    else cout << "No" << endl;

}
