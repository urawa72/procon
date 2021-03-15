#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int q; cin >> q;
    string s;
    // 1次元配列の左端を保持しておく
    V<P<char, ll> > v;
    int l = 0;
    for(int i = 0; i < q; i++){
        int t; cin >> t;
        if(t == 1){
            char c; cin >> c;
            int x; cin >> x;
            v.push_back(make_pair(c, x));
        }else{
            int d; cin >> d;
            map<char, ll> mp;
            for(int j = l; j < (int)v.size(); j++){
                if(d == 0) break;
                if(v[j].second <= d){
                    // d以下だったら全て削除
                    // lは次の添字をさすようにする
                    mp[v[j].first] += v[j].second;
                    d -= v[j].second;
                    l = j + 1;
                }else{
                    // dより大きかったらdだけ減算し
                    // lはこの添字をさしておく
                    mp[v[j].first] += d;
                    v[j].second -= d;
                    d = 0;
                    l = j;
                }
            }
            ll sum = 0;
            for(auto p : mp) sum += p.second * p.second;
            cout << sum << endl;
        }
    }

    return 0;
}
