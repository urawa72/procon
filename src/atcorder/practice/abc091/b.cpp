#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REPE(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;

int main() {
   int n; cin >> n;
   map<string, int> ms;
   rep(i, n){
       string s; cin >> s;
       ms[s]++;
   }
   int m; cin >> m;
   map<string,int> mt;
   rep(i, m){
       string t; cin >> t;
       mt[t]++;
   }

   int ans = 0;
   for(auto p : ms){
       int sum = p.second - mt[p.first];
       ans = max(ans, sum);
   }
   cout << ans << endl;
}
