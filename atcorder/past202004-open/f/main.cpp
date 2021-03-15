#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<V<int> > v(n + 1);
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        v[a].push_back(b);
    }

    ll sum = 0;
    priority_queue<int> q;
    for(int i = 1; i <= n; i++){
        for(auto w : v[i]){
            q.push(w);
        }
        ll tmp = q.top();
        q.pop();
        sum += tmp;
        cout << sum << endl;
    }

    return 0;
}
