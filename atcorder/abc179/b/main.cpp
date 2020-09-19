#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    int cnt = 0;
    string ans = "No";
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        if(a == b) cnt++;
        else cnt = 0;
        if(3 <= cnt) ans = "Yes";
    }
    cout << ans << endl;

    return 0;
}
