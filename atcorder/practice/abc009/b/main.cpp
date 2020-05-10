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
    // M<int, int, greater<int>> m;
    // 配列でもOK
    V<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        // int a; cin >> a;
        // m[a]++;
    }

    sort(all(v), greater<int>());
    for(int i = 0; i < n; i++){
        if(v[i] != v[0]){
            cout << v[i] << endl;
            return 0;
        }
    }

    // int cnt = 0;
    // for(auto p : m){
    //     if(cnt == 0){
    //         cnt++;
    //         continue;
    //     }
    //     cout << p.first << endl;
    //     return 0;
    // }
}
