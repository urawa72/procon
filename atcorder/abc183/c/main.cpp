#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    ll k; cin >> k;

    V<V<ll> > v(n, V<ll>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    int ans = 0;
    V<int> nums(n - 1);
    iota(ALL(nums), 1);
    do {
        ll sum = v[0][nums[0]];
        int pre = nums[0];
        for(int i = 1; i < n - 1; i++){
            sum += v[pre][nums[i]];
            pre = nums[i];
        }
        sum += v[pre][0];
        if(sum == k) ans++;
    } while(next_permutation(nums.begin(), nums.end()));

    cout << ans << endl;

    return 0;
}
