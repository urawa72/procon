#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    for(int i = 0; i < n; i++){
        for(int j = n - 1; 0 <= j; j--){
            cout << s[j][i];
        }
        cout << endl;
    }
}
