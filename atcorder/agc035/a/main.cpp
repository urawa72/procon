#include <bits/stdc++.h>
using namespace std;

#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n; cin >> n;
    map<ll, ll> m;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        m[a]++;
    }

    bool ans = true;
    // 3種類でなければNG
    if(m.size() > 3){
        cout << "No" << endl;
        return 0;
    }
    // 3種類の時
    if(m.size() == 3){
        ll x = 0;
        for(auto p : m){
            x ^= p.first;
            // n/3必要
            if(p.second * 3 != n) ans = false;
        }
        // 3つの数でXORして0でなければNG
        if(x != 0) ans = false;
        ans ? cout << "Yes" << endl : cout << "No" << endl;
        return 0;
    }
    // 2種類の時は0と何か
    if(m.size() == 2){
        bool z = false;
        for(auto p : m){
            if(p.first == 0){
                z = true;
                // 0が必要、かつn/3必要
                if(p.second * 3 != n) ans = false;
            }else{
                // 0以外は2n/3必要
                if(p.second * 3 != 2 * n) ans = false;
            }
        }
        // 0がなければNG
        if(!z) ans = false;
        ans ? cout << "Yes" << endl : cout << "No" << endl;
        return 0;
    }
    // 全部0でなければNG
    for(auto p : m){
        if(p.first != 0) ans = false;
    }
    ans ? cout << "Yes" << endl : cout << "No" << endl;
}
