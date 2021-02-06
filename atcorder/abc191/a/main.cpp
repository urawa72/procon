#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int v, t, s, d; cin >> v >> t >> s >> d;

    if(t * v <= d && d <= s * v){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

    return 0;
}
