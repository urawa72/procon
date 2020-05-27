#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

template <typename T>
struct TimeDegree {
    const double PI=3.14159265358979323846;
    T hour;
    T minute;
    TimeDegree(T h, T m) {
        hour = h;
        minute = m;
    }
    // 時計算(長針と短針のなす角)
    double getDegree() const {
        double x = hour * 30 + minute * 0.5; // 短針は0.5度/分
        double y = minute * 6.0; // 長針は6度/分
        return abs(x - y);
    }
    // 度をラジアンへ
    double getRadian() const {
        return getDegree() * PI / 180.0;
    }
};

int main() {
    double n, m; cin >> n >> m;

    if(n > 12) n -= 12;
    TimeDegree<double> t = TimeDegree<double>(n, m);
    double d = t.getDegree();
    if(180 >= d) cout << setprecision(12) << d << endl;
    else cout << setprecision(12) << 360 - d << endl;
}

