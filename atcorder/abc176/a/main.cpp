#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, x, t; cin >> n >> x >> t;

    int sum = 0, cnt = 0;
    while(1){
        cnt++;
        sum += x;
        if(n <= sum){
            cout << cnt * t << endl;
            return 0;
        }
    }

    return 0;
}
