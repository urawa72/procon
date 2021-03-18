#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    string s; cin >> s;

    auto check = [](string ss){
        bool flag = true;
        for(auto c : ss){
            if(c == '#') continue;
            flag = false;
            break;
        }
        return flag;
    };

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            string t = s;
            for(int k = 0; k < i; k++){
                for(int l = 1; l < n; l++){
                    if(t[l] == '#') t[l - 1] = '#';
                }
            }
            for(int k = 0; k < j; k++){
                for(int l = n - 1; 0 < l; l--){
                    if(t[l - 1] == '#') t[l] = '#';
                }
            }
            if(check(t)){
                cout << i << ' ' << j << endl;
                return 0;
            }
        }
    }

    return 0;
}
