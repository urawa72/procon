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
    int n, m; cin >> n >> m;
    V<int> v(m);
    for(int i = 0; i < m; i++) cin >> v[i];

    deque<int> q;
    for(int i = 1; i <= n; i++) q.push_back(i);

    for(int i = 0; i < m; i++){
        q.push_front(v[i]);
    }

    V<bool> w(n);
    while(!q.empty()){
        int p = q.front();
        q.pop_front();
        if(w[p]) continue;
        w[p] = true;
        cout << p << endl;
    }

    return 0;
}
