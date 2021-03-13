#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    string s; cin >> s;

    string ans;
    for(int i = 0; i < n; i++){
        if(i < n - 2 && s[i] == 'j' && s[i+1] == 'o' && s[i+2] == 'i'){
            ans += "JOI";
            i+=2;
        }else{
            ans += s[i];
        }
    }
    cout << ans << endl;

    return 0;
}
