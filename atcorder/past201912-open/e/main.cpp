#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, q; cin >> n >> q;
    V<int> a(q), b(q), c(q);
    for(int i = 0; i < q; i++){
        int x; cin >> x;
        int y, z;
        if(x == 1) cin >> y >> z;
        else cin >> y;
        y--;
        a[i] = x;
        b[i] = y;
        if(z) z--, c[i] = z;
    }

    string s;
    for(int i = 0; i < n; i++) s += 'N';
    V<string> ans(n, s);

    for(int i = 0; i < q; i++){
        if(a[i] == 1) {
            ans[b[i]][c[i]] = 'Y';
        }
        if(a[i] == 2){
            for(int j = 0; j < n; j++){
                if(b[i] == j) continue;
                if(ans[j][b[i]] == 'Y') ans[b[i]][j] = 'Y';
            }
        }
        if(a[i] == 3) {
            string tmp = ans[b[i]];
            for(int j = 0; j < n; j++){
                if(b[i] == j) continue;
                if(ans[b[i]][j] == 'N') continue;
                for(int k = 0; k < n; k++){
                    if(b[i] == k) continue;
                    if(ans[j][k] == 'Y') tmp[k] = 'Y';
                }
            }
            ans[b[i]] = tmp;
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }

    return 0;
}
