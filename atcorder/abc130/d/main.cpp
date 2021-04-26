#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  ll n, k; cin >> n >> k;
  V<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  V<ll> sum(n + 1);
  for (int i = 0; i < n; i++) {
    sum[i + 1] = sum[i] + a[i];
  }

  // 尺取法
  ll ans = 0;
  int r = 1;
  for (int l = 0; l <= n; l++) {
    while(sum[r] - sum[l] < k && r < n) r++;
    if(k <= sum[r] - sum[l]) ans += (n - r + 1);
  }

  cout << ans << endl;

  return 0;
}
