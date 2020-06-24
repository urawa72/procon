#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int a, b; cin >> a >> b;
    if(1 <= a && a <= 9 && 1 <= b && b <= 9){
        cout << a * b << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}
