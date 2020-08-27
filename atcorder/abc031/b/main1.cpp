#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int l, h; cin >> l >> h;
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
        if(a[i] < l){
            cout << l - a[i] << endl;
        }else if(l <= a[i] && a[i] <= h){
            cout << 0 << endl;
        }else{
            cout << -1 << endl;
        }
    }
}
