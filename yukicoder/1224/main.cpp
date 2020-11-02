#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }

int main() {
    ll a, b; cin >> a >> b;

    // 数を大きく分母を素因数分解できないためaとbのgcdでbを割っておく
    // 分母の素因数が2と5のみなら有限小数
    b /= gcd(a, b);
    while(b % 2 == 0) b /= 2;
    while(b % 5 == 0) b /= 5;

    if(b == 1) cout << "No" << endl;
    else cout << "Yes" << endl;


    return 0;
}
