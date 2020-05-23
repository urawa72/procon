#include <bits/stdc++.h>
#include <map>
#include <queue>
#include <vector>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int N; cin >> N;
    string s; cin >> s;
    deque<char> d;

    // 1文字でbだったら手順0で終了
    if(N == 1 && s[0] == 'b'){
        cout << 0 << endl;
        return 0;
    }

    // 実行時間に余裕あるので手順をdequeで再現してsと一致比較する
    d.push_back('b');
    int i = 1, n = 0;
    bool flag = false;
    while(1){
        if(i == 3 * n + 1){
            d.push_front('a');
            d.push_back('c');
        }
        if(i == 3 * n + 2){
            d.push_front('c');
            d.push_back('a');
        }
        if(i == 3 * n){
            d.push_front('b');
            d.push_back('b');
        }

        string tmp;
        for(int i = 0; i < d.size(); i++){
            tmp += d[i];
        }
        if(tmp == s){
            flag = true;
            break;
        }

        if(d.size() > N) break;

        i++;
        if(i % 3 == 0) n++;
    }

    // flag = trueなら何手順目か
    if(flag) cout << i << endl;
    else cout << -1 << endl;
}
