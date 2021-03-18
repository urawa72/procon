#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, k; cin >> n >> k;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        mp[s]++;
    }

    V<P<int, string> > v;
    for(auto p : mp){
        v.push_back({p.second, p.first});
    }

    sort(ALL(v), greater<P<int, string>>());
    int m = v.size();
    for(int i = 0; i < m; i++){
        if(i == k - 1){
            if(i + 1 < m && v[i].first == v[i + 1].first) {
                cout << "AMBIGUOUS" << endl;
            }else if(0 <= i - 1 && v[i].first == v[i - 1].first) {
                cout << "AMBIGUOUS" << endl;
            }else{
                cout << v[i].second << endl;
            }
            return 0;
        }
    }


    return 0;
}
