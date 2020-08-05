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
    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            while(i < n){
                if(s[i] != ' ') break;
                i++;
            }
            i--;
            cout << ',';
        }else{
            cout << s[i];
        }
    }
    cout << '\n';

    return 0;
}
