#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;
    map<string, int> mp;
    string pre;
    int prel = 0;
    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        mp[s]++;
        if(1 < i){
            if(i & 1 && 1 < mp[s]){
                cout << "LOSE" << endl;
                return 0;
            }else if(1 < mp[s]){
                cout << "WIN" << endl;
                return 0;
            }
            if(i & 1 && s[0] != pre[prel - 1]){
                cout << "LOSE" << endl;
                return 0;
            }else if(s[0] != pre[prel - 1]){
                cout << "WIN" << endl;
                return 0;
            }
        }
        prel = s.size();
        pre = s;
    }
    cout << "DRAW" << endl;

    return 0;
}
