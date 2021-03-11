#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    // mapでAの登場回数をカウントする
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        mp[a]++;
    }

    // 差分の2乗 * その差分となるAの組み合わせ数
    // Aの組み合わせ数は最大400*400程度
    ll ans = 0;
    for(auto p1 : mp){
        for(auto p2 : mp){
            // 4-2,2-4と順番が違うだけの場合は同じ組み合わせなので除外する
            // 全通り計算して2で割ってもOK
            if(p1.first > p2.first) continue;
            if(p1.first == p2.first) continue;
            ans += pow(p2.first - p1.first, 2) * p1.second * p2.second;
        }
    }
    cout << ans << endl;

    return 0;
}
