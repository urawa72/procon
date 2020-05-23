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
    string a, b; cin >> a >> b;

    int ai = stoi(a) * pow(10, b.size());
    cout << (ai + stoi(b)) * 2 << endl;

}
