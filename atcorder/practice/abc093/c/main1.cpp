#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    vector<int> n(3);
    for(int i = 0; i < 3; i++){
        cin >> n[i];
    }
    sort(all(n));
    // 解説の解答
    // 1回の操作で全体で2ずつ増えるため
    // 等しくなった時も元の和と偶奇は同じ
    int diff = n[2] - n[0] + n[2] - n[1];
    // 差分が偶数なら2で割った商が操作回数
    int ans = diff / 2;
    // 奇数の場合は最大値を+1しないと等しくならない
    // 全体としては+2する
    if(diff % 2 != 0) ans += 2;
    cout << ans << endl;

    // 場合分け
    // int x1 = n[2] - n[0];
    // int x2 = n[2] - n[1];
    // // 両方偶数
    // if(x1 % 2 == 0 && x2 % 2 == 0){
    //     cout << x1 / 2 + x2 / 2 << endl;
    //     // 偶奇
    // }else if((x1 % 2 == 0 && x2 % 2 != 0) || (x1 % 2 != 0 && x2 % 2 == 0)){
    //     cout << x1 / 2 + 1 + x2 / 2 + 1 << endl;
    //     // 両方奇数
    // }else{
    //     cout << x1 / 2 + x2 / 2 + 1 << endl;
    // }
}
