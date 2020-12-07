#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    int cnt = 0;
    for(int i = 0; i < (int)s.size(); i++){
        if(cnt == 0 && (s[i] == 'i' || s[i] == 'I')) cnt++;
        if(cnt == 1 && (s[i] == 'c' || s[i] == 'C')) cnt++;
        if(cnt == 2 && (s[i] == 't' || s[i] == 'T')) cnt++;
    }
    if(cnt == 3) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
