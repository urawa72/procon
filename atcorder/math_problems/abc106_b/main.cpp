#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i+=2){
        int c = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0) c++;
        }
        if(c == 8) ans++;
    }
    cout << ans << endl;

    return 0;
}
