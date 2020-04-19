#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
   int n; cin >> n;
   vector<vector<int> > a(n + 1);
   for(int i = 1; i < n; i++){
       int t; cin >> t;
       a[t].push_back(i);
   }
   for(int i = 1; i <= n; i++){
       cout << a[i].size() << endl;
   }
}
