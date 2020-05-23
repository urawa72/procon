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
    V<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if(sum % n != 0){
        cout << -1 << endl;
        return 0;
    }

    int b = sum / n;
    int tmp = a[0], ans = 0;
    for(int i = 1; i < n; i++){
        if(tmp != b * i) ans++;
        tmp += a[i];
    }
    cout << ans << endl;
}
