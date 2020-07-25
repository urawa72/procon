#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD =  1000000007;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;
    V<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int y = 1000;
    int c = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= a[i + 1]){
            c = y / a[i];
            y -= (a[i] * c);
            while(i + 1 < n) {
                if(a[i] <= a[i + 1]) i++;
                else break;
            }
            y += (c * a[i]);
            c = 0;
        }
    }
    cout << y << endl;

    return 0;
}
