#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n, d; cin >> n >> d;
  d *= 2;
  d++;
  cout << (n + d - 1) / d << endl;

  return 0;
}
