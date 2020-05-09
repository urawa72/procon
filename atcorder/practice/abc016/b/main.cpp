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
    int a, b, c; cin >> a >> b >> c;

    if(a + b == c && a - b == c){
        cout << '?' << endl;
    }else if(a + b == c){
        cout << '+' << endl;
    }else if(a - b == c){
        cout << '-' << endl;
    }else{
        cout << '!' << endl;
    }
}
