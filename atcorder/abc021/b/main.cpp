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
    int a, b; cin >> a >> b;
    int k; cin >> k;
    M<int, int> m;
    m[a]++;
    m[b]++;
    bool flag = true;
    for(int i = 0; i < k; i++){
        int p; cin >> p;
        m[p]++;
        if(m[p] > 1){
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
