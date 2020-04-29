#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string o, e; cin >> o >> e;

    for(int i = 0; i < max(o.size(), e.size()); i++){
        if(o[i]) cout << o[i];
        if(e[i]) cout << e[i];
    }
    cout << endl;
}
