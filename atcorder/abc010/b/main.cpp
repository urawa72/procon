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
    int n; cin >> n;
    V<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        while(1){
            int t = 2;
            bool flag = false;
            while(t <= v[i]){
                if(v[i] == t) flag = true;
                t += 3;
            }
            if(v[i] % 2 == 0) flag = true;
            if(flag){
                ans++;
                v[i]--;
            }else{
                break;
            }
        }
    }
    cout << ans << endl;
}
