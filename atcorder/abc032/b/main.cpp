#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    int k; cin >> k;
    int n = s.size();

    // kの方が大きい時は0
    if(n < k){
        cout << 0 << endl;
        return 0;
    }

    // 連想配列でパスワード登場回数をカウント
    map<string, int> m;
    for(int i = 0; i < n - k + 1; i++){
        string tmp = s.substr(i, k);
        m[tmp]++;
    }
    cout << m.size() << endl;
}
