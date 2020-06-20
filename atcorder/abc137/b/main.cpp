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
    int k, x; cin >> k >> x;

    for(int i = x - k + 1; i < x + k; i++){
        if(k + x == i) cout << i << endl;
        else cout << i << " ";
    }

    return 0;
}
