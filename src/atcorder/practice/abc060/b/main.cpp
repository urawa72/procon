#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll a, b, c; cin >> a >> b >> c;
    // bで割った余りはb以上にはならないので、bまで調べればOK
    for(int i = 0; i < b; i++){
        if(a * i % b == c){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
