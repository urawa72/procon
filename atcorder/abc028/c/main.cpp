#include <bits/stdc++.h>
#include <functional>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;

// V<int> v;
// M<int, int, greater<int>> m;
// void rec(int n, int i, int sum){
//     if(n == 3){
//         m[sum]++;
//         return;
//     }
//     if(i == 6) return;
//     rec(n + 1, i + 1, sum + v[i]);
//     rec(n, i + 1, sum);
// }

int main() {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    cout << max(a + d + e, b + c + e) << endl;

    // A<B<C<D<Eなので、 再帰でなくても解ける
    // for(int i = 0; i < 5; i++){
    //     int n; cin >> n;
    //     v.push_back(n);
    // }
    // rec(0, 0, 0);
    //
    // int cnt = 1;
    // for(auto p : m){
    //     if(cnt == 3){
    //         cout << p.first << endl;
    //         return 0;
    //     }
    //     cnt++;
    // }
}
