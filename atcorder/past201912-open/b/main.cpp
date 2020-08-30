#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    int pre = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(i != 0) {
            if(pre < a) cout << "up " << a - pre << endl;
            if(pre == a) cout << "stay" << endl;
            if(a < pre) cout << "down " << pre - a << endl;
        }
        pre = a;
    }

    return 0;
}
