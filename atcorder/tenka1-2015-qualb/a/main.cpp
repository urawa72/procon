#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    V<int> memo(22);
    memo[0] = 100;
    memo[1] = 100;
    memo[2] = 200;
    for(int i = 3; i < 20; i++){
        memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
    }
    cout << memo[19] << endl;
    return 0;
}
