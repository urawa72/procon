#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b, c; cin >> a >> b >> c;
    if(a < b){
        if(b < c) cout << "B" << endl;
        else if(a < c) cout << "C" << endl;
        else cout << "A" << endl;
    }else{
        if(a < c) cout << "A" << endl;
        else if(b < c) cout << "C" << endl;
        else cout << "B" << endl;
    }

    return 0;
}
