#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    char win[202][202];
    win['R']['R'] = win['R']['S'] = win['S']['R'] = 'R';
    win['S']['S'] = win['S']['P'] = win['P']['S'] = 'S';
    win['P']['P'] = win['P']['R'] = win['R']['P'] = 'P';

    while(k--){
        string t = s + s;
        for(int i = 0; i < n; i++){
            s[i] = win[t[i * 2]][t[i * 2 + 1]];
        }
    }
    cout << s[0] << endl;
}
