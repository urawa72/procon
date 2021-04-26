#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  int w, h, x, y;
  cin >> w >> h >> x >> y;

  int a = 0;
  if (w % 2 == 0 && h % 2 == 0) {
    if (w / 2 == x && h / 2 == y) {
      a = 1;
    }
  }

  double ans = (double)w * h / 2;
  printf("%.6f %d\n", ans, a);

  return 0;
} 
