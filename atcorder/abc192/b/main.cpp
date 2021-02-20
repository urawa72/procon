#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    bool flag = true;
    for(int i = 0; i < (int)s.size(); i++){
        if(i & 1){
            if('A' <= s[i] && s[i] <= 'Z') continue;
            else {
                flag = false;
                break;
            }
        }else{
            if('a' <= s[i] && s[i] <= 'z') continue;
            else {
                flag = false;
                break;
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
