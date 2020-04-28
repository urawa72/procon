#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    int ans = 1;
    for(int i = 2; i <= n; i*=2){
        ans = i;
    }
    cout << ans << endl;
}
