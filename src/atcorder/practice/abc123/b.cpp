#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
typedef long long ll;

int maxTime(int x){
    // if(x % 10 == 0) return x;
    // else return (x / 10 + 1) * 10;
    // +9で切り上げ
    return (x + 9) / 10 * 10;
}

int remTime(int x){
    return maxTime(x) - x;
}

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int sum = maxTime(a) + maxTime(b) + maxTime(c) + maxTime(d) + maxTime(e);
    sum -= max({remTime(a), remTime(b), remTime(c), remTime(d), remTime(e)});
    OP(sum);
    // 冗長
    // vector<int> vec1(5);
    // vector<int> vec2(5);
    // rep(i, 5) cin >> vec1[i];
    // for(int i = 0; i < 5; i++){
    //     if(vec1[i] % 10 == 0) vec2[i] = vec1[i];
    //     else vec2[i] = (vec1[i] / 10 + 1) * 10;
    // }
    //
    // int m = 0;
    // rep(i, 5){
    //     int tmp = vec2[i] - vec1[i];
    //     m = max(m, tmp);
    // }
    //
    // int sum = 0;
    // rep(i, 5) sum += vec2[i];
    // OP(sum - m);
}
