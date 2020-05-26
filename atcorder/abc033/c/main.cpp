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
    int cnt = 0;
    bool zero = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') zero = true;
        if(s[i] == '+'){
            if(!zero) cnt++;
            zero = false;
        }
    }
    if(!zero) cnt++;
    cout << cnt << endl;

}
