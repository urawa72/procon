#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll x; cin >> x;
    ll sum = 0;
    for(int i = 1; sum <= x; i++){
        sum += i;
        if(x <= sum){
            cout << i << endl;
            return 0;
        }
    }
}
