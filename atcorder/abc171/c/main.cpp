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

char al[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main() {
    ll n; cin >> n;
    V<int> v;
    while(0 < n){
        v.push_back(n % 26);
        if(n % 26 == 0) n--;
        n /= 26;
    }
    reverse(ALL(v));
    for(auto i : v){
        if(i - 1 == -1) cout << 'z';
        else cout << al[i - 1];
    }
    cout << "\n";

    return 0;
}
