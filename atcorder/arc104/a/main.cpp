#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b; cin >> a >> b;

    for(int i = -200; i <= 200; i++){
        for(int j = -200; j <= 200; j++){
            if(i + j == a && i - j == b){
                cout << i << ' ' << j << endl;
                return 0;
            }
        }
    }

    return 0;
}
