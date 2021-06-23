#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;

  int cnt = 1;
  ll sum = 0;
  while(1){
    sum += cnt;
    cnt++;
    if(n <= sum){
      cout << cnt - 1 << endl;
      return 0;
    }
  }

  return 0;
}
