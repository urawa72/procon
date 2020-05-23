#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    if(s.size() == 1){
        if(s[0] == 'a'){
            cout << -1 << endl;
            return 0;
        }else{
            char ans = s[0] - 1;
            cout << ans << endl;
            return 0;
        }
    }

    for(int i = 0; i < s.size() - 1; i++){
        cout << s[i];
    }
    cout << "\n";
}
