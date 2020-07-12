#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++){
        int ans = 0;
        for(int j = 1; j * j <= i; j++){
            for(int k = 1; k * k <= i; k++){
                for(int l = 1; l * l <= i; l++){
                    int sum = j * j + k * k + l * l + j * k + k * l + l * j;
                    if(sum > i) break;
                    if(sum == i) ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
