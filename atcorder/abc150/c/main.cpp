#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int n; cin >> n;
    V<int> p(n), q(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];

    V<int> nums(n);
    iota(ALL(nums), 1);
    map<V<int>, int> m;
    do {
        m[nums] = m.size();
    } while(next_permutation(nums.begin(), nums.end()));

    cout << abs(m[p] - m[q]) << endl;


    return 0;
}
