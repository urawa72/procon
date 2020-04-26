#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    map<string, ll> m;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        m[s]++;
    }
    cout << m.size() << endl;
}
