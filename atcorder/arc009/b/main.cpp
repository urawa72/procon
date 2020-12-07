#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    map<int, int> mp;
    for(int i = 0; i < 10; i++){
        int b; cin >> b;
        mp[b] = i;
    }

    int n; cin >> n;
    V<P<int, int> > vp;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        int aa = a;
        int x = 1;
        int sum = 0;
        while(0 < a){
            int tmp = a % 10;
            sum += mp[tmp] * x;
            a /= 10;
            x *= 10;
        }
        vp.push_back({sum, aa});
    }

    sort(ALL(vp));
    for(auto p : vp) cout << p.second << endl;

    return 0;
}
