#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {

    int ans = 0;
    while(1){
        int n, x;
        cin >> n >> x;
        if(n == 0 && x == 0) break;

        for(int i = 1; i <= n - 2; i++){
            for(int j = i + 1; j <= n - 1; j++){
                if(j < x - i - j && x - i - j <= n) ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
