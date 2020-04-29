#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int a, b, c, x; cin >> a >> b >> c >> x;
    int ans = 0;
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            for(int k = 0; k <= c; k++){
                int sum = i * 500 + j * 100 + k * 50;
                if(sum == x) ans++;
            }
        }
    }
    cout << ans << endl;
}
