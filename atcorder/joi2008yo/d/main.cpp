#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int m; cin >> m;
    V<P<int, int> > v(m);
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        v[i] = make_pair(x, y);
    }
    int n; cin >> n;
    V<P<int, int> > w(n);
    map<P<int, int>, int> mp;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        w[i] = make_pair(x, y);
        mp[w[i]]++;
    }

    // map/setではなく二分探索で解ける
    for(int i = 0; i < n; i++){
        int x = w[i].first - v[0].first;
        int y = w[i].second - v[0].second;
        bool flag = true;
        for(int j = 1; j < m; j++){
            P<int, int> tmp = {v[j].first + x, v[j].second + y};
            if(mp[tmp]) continue;
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout << x << " " << y << endl;
            return 0;
        }
    }


    return 0;
}
