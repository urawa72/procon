#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

ll N;
int ANS = 0;
int sft[] = {7, 5, 3};

void dfs(ll sum, int t, int f, int s){
    // nより大きくなったら終了
    if(sum > N) return;
    // 3,5,7すべて登場していたらカウント
    if(t & f & s) ANS++;
    // 繰り上げて3,5,7を足してDFS
    dfs(10 * sum + 3, 1, f, s);
    dfs(10 * sum + 5, t, 1, s);
    dfs(10 * sum + 7, t, f, 1);
}

int main() {
    cin >> N;
    dfs(0, 0, 0, 0);
    cout << ANS << endl;
}









