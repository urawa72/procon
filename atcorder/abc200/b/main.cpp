#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  ll n, k; cin >> n >> k;
  for (int i = 0; i < k; i++) {
    if(n % 200 == 0) n /= 200;
    else {
      string s = to_string(n);
      s += "200";
      n = stoll(s);
    }
  }
  cout << n << endl;

  return 0;
}
