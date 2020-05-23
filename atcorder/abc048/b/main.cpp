#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

int main() {
   ll a, b, x; cin >> a >> b >> x;
   ll aa = 0, bb = 0;
   bb = b / x;
   // a == 0のときはマイナスになるので-1にしておく
   if(a == 0) aa = -1;
   else aa = (a - 1) / x;
   cout << bb - aa << endl;
}
