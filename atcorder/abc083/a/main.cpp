#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(a + b == c + d) cout << "Balanced" << endl;
    else if(a + b < c + d) cout << "Right" << endl;
    else cout << "Left" << endl;
}
