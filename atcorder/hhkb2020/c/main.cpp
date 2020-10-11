#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    map<int, int> mp;
    bool z = false;
    int mi = 1;
    for(int i = 0; i < n; i++){
        mp[p[i]]++;
        if(p[i] == 0) z = true;
        if(!z) cout << 0 << endl;
        else{
            while(1){
                if(mp[mi]){
                    mi++;
                }else{
                    break;
                }
            }
            cout << mi << endl;
        }
    }





    return 0;
}
