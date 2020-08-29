#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;
    string t; cin >> t;

    int ans = 1001;
    int n = t.size();
    for(int i = 0; i < (int)s.size(); i++){
        string tmp = s.substr(i, n);
        if((int)tmp.size() != n) continue;
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(t[j] != tmp[j]) cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}
