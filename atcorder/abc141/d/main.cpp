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

    // 常に最大値を割引するのが良い
    // priority_queueで現段階でのmaxを拘束に取得する
    priority_queue<int> q;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        q.push(a);
    }

    // 先頭を取り出して割ってまた戻す
    for(int i = 0; i < m; i++){
        int a = q.top();
        q.pop();
        q.push(a / 2);
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += q.top();
        q.pop();
    }
    cout << ans << endl;

    return 0;
}
