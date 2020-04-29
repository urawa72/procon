#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;


int n;
vector<int> h;
int ans = 0;

int main() {
    cin >> n;
    h.resize(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    int ans = h[0];
    for(int l = 0; l < n; l++){
        // 左端から0になるまで水やりしていく
        // もともと0だったりすでに0だったらスルー
        while(h[l] > 0){
            // h[r] == 0より前までを水やり
            int r;
            for(r = l + 1; r < n; r++){
                if(h[r] == 0) break;
            }
            for(int i = 0; i < r; i++) h[i]--;
            ans++;
        }
    }
    // 隣との差分を足していく
    // for(int i = 1; i < n; i++){
    //     int sub = h[i] - h[i - 1];
    //     if(sub > 0) ans += sub;
    // }
    cout << ans << endl;
}

