#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int h, w; cin >> h >> w;
  V<V<int>> v(h, V<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> v[i][j];
    }
  }

  V<int> hsum(w), wsum(h);
  for (int i = 0; i < h; i++) {
    int sum = 0;
    for (int j = 0; j < w; j++) {
      sum += v[i][j];
    }
    wsum[i] = sum;
  }
  for (int i = 0; i < w; i++) {
    int sum = 0;
    for (int j = 0; j < h; j++) {
      sum += v[j][i];
    }
    hsum[i] = sum;
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << hsum[j] + wsum[i] - v[i][j];
      if(j < w - 1) cout << ' ';
    }
    cout << '\n';
  }

  return 0;
}
