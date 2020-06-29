#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define IINF INT_MAX
#define INF 1LL << 30

int main() {
    ll n; cin >> n;

    // nが奇数の時は2,5で割れる数はないので末尾の0は必ず0個
    if(n % 2 != 0){
        cout << 0 << endl;
        return 0;
    }

    // 偶数の二乗階乗の場合、結局(n/2)!を5で何回割れるかに帰着
    // 10*8*6*4*2=2^5(5*4*3*2*1)=2^5(5!)
    // min(2で何回割れるか=a, 5で何回割れるか=b)だが、a>=bなのは明らか
    n /= 2;
    ll ans = 0;
    while(n){
        ans += n / 5;
        n /= 5;
    }
    cout << ans << endl;

    return 0;
}
