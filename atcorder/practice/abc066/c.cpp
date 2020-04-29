#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    // 両橋に追加できるキュー
    deque<int> d;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        // 偶数なら先頭に、奇数なら末尾に追加で1回の反転で対応する
        if(i % 2 == 0) d.push_front(a);
        else d.push_back(a);
    }
    // nが偶数なら最後に反転する
    if(n % 2 == 0) reverse(all(d));
    for(int i = 0; i < n; i++){
        if(i == n - 1) cout << d.front() << endl;
        else cout << d.front() << " ";
        d.pop_front();
    }
}
