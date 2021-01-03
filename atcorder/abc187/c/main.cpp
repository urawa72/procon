#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        mp[s]++;
    }

    for(auto p : mp){
        if(p.first[0] == '!') continue;
        string t = "!" + p.first;
        if(mp[t]){
            cout << p.first << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;

    return 0;
}
