#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    string s; cin >> s;
    int a, b, c, d; cin >> a >> b >> c >> d;
    a--, b--, c--;
    int n = s.size();

    if(a == -1) cout << '\"';
    if(d != n) d--;
    for(int i = 0; i < n; i++){
        if(a == i || b == i || c == i || d == i){
            cout << s[i];
            cout << '\"';
        }else{
            cout << s[i];
        }
    }
    if(d == n) cout << '\"';
    cout << "\n";

    return 0;
}
