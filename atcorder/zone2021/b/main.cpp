#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n, d, h; cin >> n >> d >> h;
  double ans = 0;
  for (int i = 0; i < n; i++) {
    int vd, vh; cin >> vd >> vh;
    double a = (double)(vh - h) / (vd - d);
    double b = h - d * a;
    if(b < 0) continue;
    ans = max(ans, b);
  }

  printf("%.15f\n", ans);

  return 0;
}
