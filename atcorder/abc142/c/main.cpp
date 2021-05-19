#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    mp[a] = i;
  }

  for(auto p : mp){
    cout << p.second + 1 << ' ';
  }


  return 0;
}
