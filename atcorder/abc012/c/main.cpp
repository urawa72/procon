#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;


int main() {
    int n; cin >> n;
    int sub = 2025 - n;

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(i * j == sub){
                cout << i << " x " << j << endl;
            }
        }
    }
}
