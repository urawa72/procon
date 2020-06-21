#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


// priotiry_queueを使った貪欲法
int main() {
    ll n, m; cin >> n >> m;

    // 大きい順のpriority_queueに格納
    priority_queue<ll, V<ll>, less<ll>> que;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        que.push(a);
    }

    // 先頭からm回2で割る
    // 常に大きい値を2で割るのが最適なのでpriority_queue
    while(m > 0){
        ll tmp = que.top();
        que.pop();
        tmp /= 2;
        m--;
        que.push(tmp);
    }

    ll sum = 0;
    while(!que.empty()){
        sum += que.top();
        que.pop();
    }
    cout << sum << endl;
}
