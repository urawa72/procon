#include <bits/stdc++.h>
#include <functional>
#include <numeric>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long double ld;
typedef long long ll;
const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;
    // vectorとpairならsortして最大値求めるの楽
    // firstで出現数カウントすれば出現数でsortできる
    V<P<ll, ll> > even(100010), odd(100010);
    for(int i = 0; i < n; i++){
        ll v; cin >> v;
        if(i & 1){
            odd[v].first++;
            odd[v].second = v;
        }else{
            even[v].first++;
            even[v].second = v;
        }
    }

    // 大きい順にsort pairのfirstを基準にsortされる
    sort(ALL(odd), greater<P<ll, ll>>());
    sort(ALL(even), greater<P<ll, ll>>());

    ll t = 0;
    // 1番大きい数字が同じ場合は2番目の数字も考慮する
    if(odd[0].second == even[0].second){
        t = max(odd[0].first + even[1].first, odd[1].first + even[0].first);
    }else{
        t = odd[0].first + even[0].first;
    }
    // 総数からoddとevenそれぞれの大きい数字を引いた値を書き換える
    cout << n - t << endl;

    return 0;
}
