#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b; cin >> a >> b;

    if(a <= 0 && 0 <= b) cout << "Zero" << endl;
    else if(a < 0 && b < 0){
        int c = abs(b - a);
        if(c & 1) cout << "Positive" << endl;
        else cout << "Negative" << endl;
    }else{
        cout << "Positive" << endl;
    }

    return 0;
}
