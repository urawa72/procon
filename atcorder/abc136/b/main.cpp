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

bool f(int x){
    int cnt = 0;
    while(x){
        cnt++;
        x /= 10;
    }
    return cnt % 2 != 0;
}

int main() {
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(f(i)) ans++;
    }
    cout << ans << endl;

    return 0;
}
