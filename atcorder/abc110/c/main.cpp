#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    string s, t; cin >> s >> t;
    int n = s.size();
    //  アルファベットの変換テーブルを用意
    V<int> from(26, -1), to(26, -1);
    for(int i = 0; i < n; i++){
        // 数字に変換
        int a = s[i] - 'a';
        int b = t[i] - 'a';
        // すでにどちらかの変換表にデータがある場合
        if(from[a] != -1 || to[b] != -1){
            // 既存の変換表と異なる場合はNG
            if(from[a] != b || to[b] != a){
                cout << "No" << endl;
                return 0;
            }
        }else{
            // 変換表を埋める
            from[a] = b;
            to[b] = a;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
