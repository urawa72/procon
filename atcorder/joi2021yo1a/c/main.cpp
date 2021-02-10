#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    V<int> va(n), vb(m);
    for(int i = 0; i < n; i++) cin >> va[i];
    for(int i = 0; i < m; i++) cin >> vb[i];

    map<int, int> mp;
    V<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mp[va[i]] == 0 && va[i] == vb[j]){
                ans.push_back(va[i]);
                mp[va[i]]++;
                break;
            }
        }
    }

    if(0 < (int)ans.size()){
        sort(ALL(ans));
        for(int i = 0; i < (int)ans.size(); i++){
            cout << ans[i] << endl;
        }
    }else{
        cout << '\n';
    }

    return 0;
}
