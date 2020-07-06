#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;

    if(n % 1000 == 0) cout << 0 << endl;
    else{
        int a = 1000;
        while(1){
            if(n > a) a += 1000;
            else{
                cout << a - n << endl;
                return 0;
            }
        }
    }


    return 0;
}
