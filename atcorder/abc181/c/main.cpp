#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    V<int> vx(n), vy(n);
    map<ll, ll> mx, my, mz;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        vx[i] = x;
        vy[i] = y;
        mx[x]++;
        my[y]++;
    }

    for(auto x : mx){
        if(x.second == 3){
            cout << "Yes" << endl;
            return 0;
        }
    }
    for(auto y : my){
        if(y.second == 3){
            cout << "Yes" << endl;
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(vx[j] == vx[i] || vy[j] == vy[i]) continue;
            int a = vy[j] - vy[i];
            int b = vx[j] - vx[i];
            for(int k = j + 1; k < n; k++){
                if(vx[i] == vx[k] || vy[i] == vy[k]) continue;
                int c = vy[k] - vy[i];
                int d = vx[k] - vx[i];
                if(a * d == b * c){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
