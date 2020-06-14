#include <bits/stdc++.h>
#include <iomanip>
#include <numeric>
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
    ll n, a, b; cin >> n >> a >> b;
    V<ll> s(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        sum += s[i];
    }

    // 変換前平均
    ld e = (ld)sum / n;
    // 変換前差
    sort(ALL(s));
    ll d = s[n - 1] - s[0];

    if(0 < d){
        // 変換後の差 / 変換前の差
        ld p = (ld)b / d;
        ld q = a - e * p;
        cout << setprecision(12) << p << " " << q << endl;
    }else{
        // dが0の時は適切なpとqない
        cout << -1 << endl;
    }
    return 0;
}
