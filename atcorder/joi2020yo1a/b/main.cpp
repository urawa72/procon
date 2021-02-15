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
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    cout << mp['a'] + mp['i'] + mp['u'] + mp['e'] + mp['o'] << endl;

    return 0;
}
