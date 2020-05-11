#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int m; cin >> m;

    int vv;
    if(m < 100){
        vv = 0;
    }else if(m <= 5000){
        vv = m / 100;
    }else if(6000 <= m && m <= 30000){
        vv = m / 1000 + 50;
    }else if(35000 <= m && m <= 70000){
        vv = (m / 1000 - 30) / 5 + 80;
    }else{
        vv = 89;
    }
    if(vv < 10) cout << "0" << vv<< endl;
    else cout << vv << endl;
}
