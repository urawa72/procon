#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


void print_vec(const V<int> &v){
    for(auto x : v) cout << x << ' ';
    cout << endl;
}

ll check(const V<int> &v, const V<ll> &a, int n){
    ll sum = -1;
    ll tmp = -1;
    for(int i = 0; i < n; i++){
        if(tmp == -1) tmp = a[i];
        else tmp |= a[i];
        if(i != n - 1 && v[i]) {
            if(sum == -1) sum = tmp;
            else sum ^= tmp;
            tmp = -1;
        }
    }
    if(tmp != -1) sum ^= tmp;
    return sum;
}

int main() {
    int n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 1LL << 60;

    // 1区間
    ll sum = a[0];
    for(int i = 1; i < n; i++){
        sum |= a[i];
    }
    ans = min(ans, sum);

    // 2区間
    for(int i = 0; i < n - 1; i++){
        ll sum = -1;
        ll tmp = -1;
        for(int j = 0; j < n; j++){
            if(tmp == -1) tmp = a[j];
            else tmp |= a[j];
            if(j == i) {
                sum = tmp;
                tmp = -1;
            }
        }
        sum ^= tmp;
        ans = min(ans, sum);
    }

    // 3〜n - 1区間
    for(int i = 0; i < n - 2; i++){
        V<int> v(n - 1, 0);
        for(int j = n - 2; i < j; j--) v[j] = 1;
        do {
            // print_vec(v);
            ans = min(check(v, a, n), ans);
        } while(next_permutation(ALL(v)));
    }

    // n区間
    sum = a[0];
    for(int i = 1; i < n; i++){
        sum ^= a[i];
    }
    ans = min(ans, sum);

    cout << ans << endl;

    return 0;
}
