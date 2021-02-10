#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < (int)s.size(); i++){
        mp[s[i]]++;
    }

    string ans ="";
    for(int i = 0; i < mp['J']; i++){
        ans += 'J';
    }
    for(int i = 0; i < mp['O']; i++){
        ans += 'O';
    }
    for(int i = 0; i < mp['I']; i++){
        ans += 'I';
    }
    cout << ans << endl;

    return 0;
}
