#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n, k; cin >> n >> k;
    map<int, int> s;
    for(int i = 0; i < k; i++){
        int d; cin >> d;
        for(int j = 0; j < d; j++){
            int k; cin >> k;
            s[k]++;
        }
    }
    cout << n - s.size() << endl;
}
