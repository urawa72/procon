#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int x, y; cin >> x >> y;

    if(y == 0){
        cout << "ERROR" << endl;
        return 0;
    }

    // 小数点第三位以下を切り捨てる
    // 割られる数を100倍してfloorし100で割る
    int ans = floor(x * 100 / y);
    printf("%.2f\n", (double)ans / 100);

    return 0;
}
