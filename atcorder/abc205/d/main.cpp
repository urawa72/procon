#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n, q; cin >> n >> q;
  V<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // a[i]以下の良い整数の個数をカウント
  V<ll> c(n);
  for (int i = 0; i < n; i++) {
    // c[i] = a[i]からこれまで登場したi個と自分自身を引いた値
    c[i] = a[i] - i - 1;
  }

  // 二分探索でkの位置を調べる
  for (int i = 0; i < q; i++) {
    ll k; cin >> k;
    int idx = lower_bound(ALL(c), k) - c.begin();
    if(idx == 0){
      cout << k << endl;
    } else{
      // 1つ前の値にkから1つ前までに登場した良い整数の個数を引いた値を加算
      cout << a[idx - 1] + (k - c[idx - 1]) << endl;
    }
  }

  return 0;
}
