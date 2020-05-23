#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, a, b; cin >> n >> a >> b;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int sum = 0;
        int t = i;
        while(t > 0){
            // 余りが1桁目なので加算
            sum += t % 10;
            // 霜一桁を切っていく
            t /= 10;
        }
        if(a <= sum && sum <= b){
            ans += i;
        }
    }
    cout << ans << endl;
}
