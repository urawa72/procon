#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        m[a]++;
    }
    int ans = 0;
    // もう少し条件分岐は単純化できる
    for(auto p : m){
        if(p.first < p.second){
            ans += abs(p.second - p.first);
        }else if(p.second < p.first){
            ans += p.second;
        }
    }
    cout << ans << endl;
}
