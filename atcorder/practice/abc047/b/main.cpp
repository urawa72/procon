#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int w, h, n; cin >> w >> h >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int x, y, a; cin >> x >> y >> a;
        if(a == 1){
            m[a] = max(m[a], x);
        }else if(a == 2){
            int t = w - x;
            m[a] = max(m[a], t);
        }else if(a == 3){
            m[a] = max(m[a], y);
        }else{
            int t = h - y;
            m[a] = max(m[a], t);
        }
    }
    w -= (m[1] + m[2]);
    h -= (m[3] + m[4]);
    if(0 < w && 0 < h) cout << w * h << endl;
    else cout << 0 << endl;
}
