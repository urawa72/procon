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
    int n, a, b; cin >> n >> a >> b;
    int ans = 0;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        int d; cin >> d;
        int tmp = 0;
        if(d < a) tmp = a;
        if(a <= d && d <= b) tmp = d;
        if(b < d) tmp = b;
        if(s == "East") ans += tmp;
        if(s == "West") ans -= tmp;
    }

    if(ans == 0){
        cout << 0 << endl;
    }else if(ans < 0){
        cout << "West" << " " << abs(ans) << endl;
    }else{
        cout << "East" << " " << ans << endl;
    }
}
