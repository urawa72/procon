#include <bits/stdc++.h>
#include <string>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n; cin >> n;
    M<string, int> m;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        m[s]++;
    }

    int ma = 0;
    string ans;
    for(auto p : m){
        if(ma <= p.second){
            ma = p.second;
            ans = p.first;
        }
    }
    cout << ans << endl;
}
