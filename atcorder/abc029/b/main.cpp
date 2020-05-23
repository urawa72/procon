#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int ans = 0;
    for(int i = 0; i < 12; i++){
        string s; cin >> s;
        int n = s.size();
        for(int j = 0; j < n; j++){
            if(s[j] == 'r'){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
}
