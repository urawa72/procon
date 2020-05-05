#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = -50;
    for(int i = 0; i < n; i++){
        int tmax = -50, amax = -50;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            int l = min(i, j);
            int r = max(i, j);
            int cnt = 1;
            int tsum = 0, asum = 0;
            for(int k = l; k <= r; k++){
                if(cnt & 1) tsum += a[k];
                else asum += a[k];
                cnt++;
            }

            if(amax < asum){
                amax = asum;
                tmax = tsum;
            }
        }
        ans = max(ans, tmax);

    }
    cout << ans << endl;
}
