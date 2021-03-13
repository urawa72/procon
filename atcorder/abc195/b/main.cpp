#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
     int a, b, w; cin >> a >> b >> w;

     w *= 1000;

     int mi = 1e9, ma = -1;
     for(int i = 1; i <= 1000000; i++){
         if(a * i <= w && w <= b * i){
             mi = min(mi, i);
             ma = max(ma, i);
         }
     }

     if(mi == 1e9 || ma == -1) cout << "UNSATISFIABLE" << endl;
     else cout << mi << ' ' << ma << endl;


    return 0;
}
