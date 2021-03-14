#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m, q; cin >> n >> m >> q;

    map<int, int> solved;
    for(int i = 1; i <= m; i++) solved[i] = n;
    V<V<int> > score(n + 1);

    for(int i = 0; i < q; i++){
        int x, y, z;
        cin >> x >> y;
        if(x == 1){
            int sum = 0;
            for(auto n : score[y]) sum += solved[n];
            cout << sum << endl;
        }else{
            cin >> z;
            solved[z]--;
            score[y].push_back(z);
        }
    }

    return 0;
}
