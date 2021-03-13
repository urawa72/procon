#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int cnt = 1;
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(a[i - 1] <= a[i]) cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    cout << max(ans, cnt) << endl;

    return 0;
}
