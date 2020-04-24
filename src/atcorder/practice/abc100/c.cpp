#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    bool flag = true;
    while(flag){
        flag = false;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                a[i] /= 2;
                ans++;
                flag = true;
                break;
            }
        }
    }
    cout << ans << endl;
}
