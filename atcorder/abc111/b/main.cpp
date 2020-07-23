#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long double ld;
typedef long long ll;
const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;
    for(int i = 111; i <= 999; i+=111){
        if(n <= i){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
