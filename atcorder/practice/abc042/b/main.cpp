#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n, l; cin >> n >> l;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    sort(all(s));
    string ans;
    for(int i = 0; i < n; i++){
        ans += s[i];
    }
    cout << ans << endl;
}
