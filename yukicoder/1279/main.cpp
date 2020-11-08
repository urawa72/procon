#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    V<int> nums(n);
    iota(ALL(nums), 0);
    map<ll, ll> mp;
    ll ma = 0;
    do {
        ll sum = 0;
        int i = 0;
        for(auto j : nums){
            if(b[i] < a[j]) sum += a[j] - b[i];
            i++;
        }
        ma = max(sum, ma);
        mp[sum]++;
    } while(next_permutation(nums.begin(), nums.end()));

    cout << mp[ma] << endl;

    return 0;
}
