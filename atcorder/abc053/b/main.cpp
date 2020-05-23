#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string s; cin >> s;
    int n = s.size();
    int l = -1, r = -1;
    for(int i = 0; i < n; i++){
        if(l >= 0 && r >= 0) break;
        if(l < 0 && s[i] == 'A') l = i;
        if(r < 0 && s[n - 1 - i] == 'Z') r = n - 1 - i;
    }
    r = r - l + 1;
    cout << s.substr(l, r).size() << endl;
}
