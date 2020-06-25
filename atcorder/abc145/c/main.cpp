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
    V<P<int, int> > v(n + 1);
    for(int i = 1; i <= n; i++){
        int x, y; cin >> x >> y;
        v[i] = make_pair(x, y);
    }

    V<int> nums(n);
    iota(ALL(nums), 1);
    double sum = 0;
    int cnt = 0;
    do {
        cnt++;
        for(int i = 0; i < n - 1; i++){
            double a = pow(v[nums[i]].first - v[nums[i + 1]].first, 2);
            double b = pow(v[nums[i]].second - v[nums[i + 1]].second, 2);
            sum += sqrt(a + b);
        }
    } while(next_permutation(nums.begin(), nums.end()));
    printf("%.10f", sum / cnt);

    return 0;
}
