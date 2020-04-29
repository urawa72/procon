#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REPE(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;

int main() {
    int k; cin >> k;
    vector<ll> a;
    // 1 ~ 9 までをいれる
    for(int i = 1; i <= 9; i++) a.push_back(i);
    while(1){
        // kに達してたら出力
        if(k <= a.size()){
            cout << a[k - 1] << endl;
            return 0;
        }
        // 1 ~ 9までの分は引いておく
        k -= a.size();
        vector<ll> old;
        swap(old, a);
        for(ll x : old){
            // 今の数字の末尾に-1, 0, +1のいずれか追加
            for(int i = -1; i <= 1; i++){
                // 末尾に付け足す数字を求める
                int d = x % 10 + i;
                // 0 ~ 9でなければスルー
                if(d < 0 || d > 9) continue;
                // 今の桁を繰り上げて末尾の数字を足す
                ll nx = x * 10 + d;
                a.push_back(nx);
            }
        }
    }
}
