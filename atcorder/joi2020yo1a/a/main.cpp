#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b, c; cin >> a >> b >> c;
    map<int, int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    if(mp[1] < mp[2]) cout << 2 << endl;
    else cout << 1 << endl;

    return 0;
}
