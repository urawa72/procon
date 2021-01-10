#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int x, y; cin >> x >> y;

    if(x < y){
        if(y < x + 3){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if(x < y + 3){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}
