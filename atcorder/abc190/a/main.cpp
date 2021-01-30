#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b, c; cin >> a >> b >> c;

    if(c == 0){
        if(a > b){
            cout << "Takahashi" << endl;
        }else{
            cout << "Aoki" << endl;
        }
    }else{
        if(b > a){
            cout << "Aoki" << endl;
        }else{
            cout << "Takahashi" << endl;
        }
    }

    return 0;
}
