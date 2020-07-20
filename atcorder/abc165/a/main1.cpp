#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int k; cin >> k;
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(i % k == 0){
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;
}
