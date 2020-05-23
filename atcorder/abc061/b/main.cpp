#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<int> v(n + 1);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        v[a]++;
        v[b]++;
    }
    for(int i = 1; i <= n; i++){
        cout << v[i] << endl;
    }
}
