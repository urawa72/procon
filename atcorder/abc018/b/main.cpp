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
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        l--;
        r--;
        while(1){
            if(r < l) break;
            char t = s[l];
            s[l] = s[r];
            s[r] = t;
            l++;
            r--;
        }
    }
    cout << s << endl;
}
