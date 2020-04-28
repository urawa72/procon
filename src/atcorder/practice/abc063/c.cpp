#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    int sum = 0, m = 100;
    // 合計と一番小さい10の倍数ではない値を保持
    for(int i = 0; i < n; i++){
        int s; cin >> s;
        sum += s;
        if(s % 10 != 0){
            m = min(m, s);
        }
    }

    // 10の倍数でも一番小さい値が存在すればそれを引けばOK
    if(sum % 10 == 0 && m != 100) cout << sum - m << endl;
    else if(sum % 10 != 0) cout << sum << endl;
    else cout << 0 << endl;
}
