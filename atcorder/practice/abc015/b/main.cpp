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
    int n; cin >> n;
    double sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        double a; cin >> a;
        if(a == 0) cnt++;
        sum += a;
    }

    cout << ceil(sum / (n - cnt)) << endl;
}
