#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll x; cin >> x;
    for(int i = 1; pow(i, 4) <= x; i++){
        if(pow(i, 4) == x){
            cout << i << endl;
            return 0;
        }
    }
}
