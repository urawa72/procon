#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string s; cin >> s;
    int n = s.size();
    int ans = 0;
    for(int i = 1; i < n / 2; i++){
        if(s.substr(0, i) == s.substr(i, i)){
            ans = max(ans, i * 2);
        }
    }
    cout << ans << endl;
}
