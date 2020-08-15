#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;

    int sum = 0, tmp = 0;
    V<int> v;
    for(int i = 1; i <= n; i++){
        sum += i;
        v.push_back(i);
        if(n <= sum){
            tmp = sum - n;
            break;
        }
    }

    for(int i = 0; i < (int)v.size(); i++){
        if(v[i] == tmp) continue;
        cout << v[i] << endl;
    }

    return 0;
}
