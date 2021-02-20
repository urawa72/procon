#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(i & 1){
            if(s[i] != 'O') ans++;
        }else{
            if(s[i] != 'I') ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
