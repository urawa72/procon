#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
   int n; cin >> n;
   V<int> a(n);
   for(int i = 0; i < n; i++) cin >> a[i];

   int p = 1, cnt = 0;;
   for(int i = 0; i < n; i++){
       if(a[i] != p) cnt++;
       else p++;
   }
   if(cnt == n) cout << -1 << endl;
   else cout << cnt << endl;
}
