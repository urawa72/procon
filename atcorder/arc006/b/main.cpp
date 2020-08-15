#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n, l; cin >> n >> l;
    V<string> v;
    for(int i = 0; i < l + 1; i++){
        string s;
        getline(cin, s);
        if(s == "") continue;
        v.push_back(s);
    }
    string y;
    getline(cin, y);

    int w = v[0].size();
    for(int i = 0; i < n * 2 - 1; i+=2){
        int now = i;
        for(int j = 0; j < l; j++){
            if(now + 1 < w && v[j][now + 1] == '-'){
                now += 2;
            }else if(0 <= now - 1 && v[j][now - 1] == '-'){
                now -= 2;
            }
        }
        if(y[now] == 'o'){
            if(i == 0) cout << 1 << endl;
            else cout << i / 2 + 1 << endl;
        }
    }

    return 0;
}
