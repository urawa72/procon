#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    int n2 = pow(2, n);
    V<P<int, int> > a(n2);
    for(int i = 0; i < n2; i++){
        int x; cin >> x;
        a[i] = make_pair(i + 1, x);
    }

    int c = 1;
    map<int, int> ans;
    V<P<int, int> > tmp = a;
    while(c <= n){
        V<P<int, int> > v;
        for(int i = 0; i < (int)tmp.size(); i+=2){
            if(tmp[i].second < tmp[i + 1].second){
                v.push_back(tmp[i + 1]);
            }else{
                v.push_back(tmp[i]);
            }
            ans[tmp[i].first] = c;
            ans[tmp[i + 1].first] = c;
        }
        c++;
        tmp = v;
    }

    for(auto p : ans) cout << p.second << endl;

    return 0;
}
