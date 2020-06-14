#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n; cin >> n;

    int a = (n - 1) % 9 + 1;
    int b = (n - 1) / 9 + 1;
    for(int i = 0; i < b; i++){
        cout << a;
    }
    cout << "\n";

    // if(9 < n){
    //     int m = n / 9;
    //     int r = n % 9;
    //     if(r == 0){
    //         r = 9;
    //         m--;
    //     }
    //     for(int i = 0; i <= m; i++){
    //         cout << r;
    //     }
    //     cout << "\n";
    // }else{
    //     cout << n << endl;
    // }
    return 0;
}
