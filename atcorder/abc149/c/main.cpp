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

bool is_prime(ll N){
    for(ll i = 2; i * i <= N; i++){
        if(N % i == 0) return false;
    }
    return true;
}


int main() {
    ll x; cin >> x;
    while(1){
        if(is_prime(x)){
            cout << x << endl;
            return 0;
        }
        x++;
    }

    return 0;
}
