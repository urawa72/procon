#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

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
        // 短針は0.5度/分
        double x = hour * 30 + minute * 0.5;
        // 長針は6度/分
        double y = minute * 6.0;
        return abs(x - y);
    }

    // 度をラジアンへ
    double getRadian() const {
        return getDegree() * PI / 180.0;
    }
};

int main() {
    double a, b; cin >> a >> b;
    int h, m; cin >> h >> m;
    TimeDegree<int> tg(h, m);
    double ans = pow(a, 2.0) + pow(b, 2.0) - 2 * a * b * cos(tg.getRadian());
    cout << setprecision(20) << sqrt(ans) << endl;
}
