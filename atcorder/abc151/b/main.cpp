#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int n, k, m; cin >> n >> k >> m;
    int sum = 0;
    for(int i = 0; i < n - 1; i++){
        int a; cin >> a;
        sum += a;
    }

    for(int i = 0; i <= k; i++){
        if((sum + i) / n >= m){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
