#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n; cin >> n;
    V<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // setで重複なく管理する
    set<ll> st;
    for(int i = 0; i < n; i++){
        ll tmp = v[i];
        while(1){
            if(tmp % 2 != 0){
                // 奇数だったらsetに保存
                st.insert(tmp);
                break;
            }else if(tmp == 0){
                st.insert(tmp);
                break;
            }
            // 可能な限り2で割って判定する
            // xと2xは同じ値でsetに保存される
            tmp /= 2;
        }
    }
    cout << st.size() << endl;
}
