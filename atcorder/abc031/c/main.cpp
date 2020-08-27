#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // 高橋くんをiで固定して青木くんを全通り試す
    int ans = -3000;
    for(int i = 0; i < n; i++){
        int suma = -3000, sumt = -3000;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            int l = min(i, j);
            int r = max(i, j);
            int c = 1, tmpa = 0, tmpt = 0;
            for(int k = l; k <= r; k++){
                if(c & 1) tmpt += v[k];
                else tmpa += v[k];
                c++;
            }
            // 青木くんの合計値が最大の時に更新する
            if(suma < tmpa){
                suma = tmpa;
                sumt = tmpt;
            }
        }
        ans = max(ans, sumt);
    }
    cout << ans << endl;

    return 0;
}
