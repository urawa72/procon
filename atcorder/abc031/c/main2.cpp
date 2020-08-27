#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n; cin >> n;
    V<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = -50;
    for(int i = 0; i < n; i++){
        int tmax = -50, amax = -50;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            // 左端と右端を決定する
            int l = min(i, j);
            int r = max(i, j);
            // 奇数をカウントするための変数
            int cnt = 1;
            // l-r区間内のそれぞれの合計値
            int tsum = 0, asum = 0;
            for(int k = l; k <= r; k++){
                if(cnt & 1) tsum += v[k];
                else asum += v[k];
                cnt++;
            }
            // 青木が最大の時に高橋の点を更新
            // 青木の最大値も更新
            if(amax < asum){
                amax = asum;
                tmax = tsum;
            }
        }
        // 高橋の最大値を更新
        ans = max(ans, tmax);
    }
    cout << ans << endl;
}
