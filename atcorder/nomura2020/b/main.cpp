#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    string s; cin >> s;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == '?'){
            if(s[i - 1] == 'P'){
                s[i] = 'D';
            }else if(s[i + 1] == 'D' || s[i + 1] == '?'){
                s[i] = 'P';
            }else{
                s[i] = 'D';
            }
        }
    }
    for(int i = 0; i < (int)s.size(); i++){
        if(i != s.size() - 1) cout << s[i];
        else cout << s[i] << endl;
    }

}
