#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<P<int, int> > v(n);
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        v[i] = make_pair(a, b);
    }

    sort(ALL(v));

    priority_queue<int> q;
    for(auto p : v) {
        q.push(p.second);
    }

    V<ll> sum(n + 1, 0);
    for(int i = 0; i < n; i++){
        ll tmp = q.top();
        q.pop();
        sum[i + 1] = sum[i] + tmp;
    }
    //
    // for(int i = 1; i <= n; i++){
    //     cout << sum[i] << endl;
    // }

    return 0;
}
