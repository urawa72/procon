#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    string s;
    getline(cin, s);

    int n = s.size();
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        if(s[i] == '@') {
            while(i < n && s[i] == '@') i++;
            string name = "";
            while(i < n && s[i] != ' ' && s[i] != '@') {
                name += s[i];
                i++;
            }
            i--;
            if(name != "") mp[name]++;
        }
    }

    for(auto p : mp){
        cout << p.first << endl;
    }

    return 0;
}
