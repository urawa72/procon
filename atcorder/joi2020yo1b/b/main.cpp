#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;

    string t = s.substr(a - 1, b - a + 1);
    reverse(ALL(t));

    a--, b--;
    for(int i = 0; i < n; i++){
        if(a <= i && i < b) continue;
        if(i == b) cout << t;
        else cout << s[i];
    }
    cout << '\n';


    return 0;
}
