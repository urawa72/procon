#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

// かなり冗長
int main() {
    int k, x; cin >> k >> x;

    vector<int> vec;
    for(int i = k - 1; 0 < i; i--){
        int num = x - i;
        if(num < -1000000) break;
        vec.push_back(num);
    }
    vec.push_back(x);
    for(int i = 1; i < k; i++){
        int num = x + i;
        if(1000000 < num) break;
        vec.push_back(num);
    }
    int s = vec.size();
    rep(i, s){
        cout << vec[i] << " ";
        if(i == s - 1) {
            cout << endl;
        }
    }
}
