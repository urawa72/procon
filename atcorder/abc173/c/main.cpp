#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int h, w, k; cin >> h >> w >> k;
    V<string> v(h);
    for(int i = 0; i < h; i++) cin >> v[i];

    int ans = 0;
    for(int bit1 = 0; bit1 < (1 << h); bit1++){
        for(int bit2 = 0; bit2 < (1 << w); bit2++){
            int cnt = 0;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if((bit1 & (1 << i)) == 0 && (bit2 & (1 << j)) == 0){
                        if(v[i][j] == '#') cnt++;
                    }
                }
            }
            if(cnt == k) ans++;
        }
    }
    cout << ans << endl;


    return 0;
}
