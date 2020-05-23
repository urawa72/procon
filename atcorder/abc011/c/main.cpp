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
    int n1, n2, n3; cin >> n1 >> n2 >> n3;

    if(n == n1 || n == n2 || n == n3){
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i < 100; i++){
        if(n - 3 != n1 && n - 3 != n2 && n - 3 != n3){
            n -= 3;
            continue;
        }
        if(n - 2 != n1 && n - 2 != n2 && n - 2 != n3){
            n -= 2;
            continue;
        }
        if(n - 1 != n1 && n - 1 != n2 && n - 1 != n3){
            n -= 1;
            continue;
        }
    }

    if(n <= 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
