#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<ll> v(5);
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(s[0] == 'M') v[0]++;
        if(s[0] == 'A') v[1]++;
        if(s[0] == 'R') v[2]++;
        if(s[0] == 'C') v[3]++;
        if(s[0] == 'H') v[4]++;
    }
    ll ans = 0;
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 4; j++){
            for(int k = j + 1; k < 5; k++){
                ans += v[i] * v[j] * v[k];
            }
        }
    }
    cout << ans << endl;
}
