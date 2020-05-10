#include <bits/stdc++.h>
#include <string>
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

    int h = n / 3600;
    n %= 3600;
    int m = n / 60;
    n %= 60;
    int s = n;
    printf("%02d:%02d:%02d\n", h, m, s);
}
