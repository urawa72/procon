#include <bits/stdc++.h>
#include <iomanip>
#include <numeric>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll k; cin >> k;
    string s, t; cin >> s >> t;

    V<ll> cnt(10, k);
    for(int i = 0; i < 5; i++) cnt[s[i] - '0']--;
    for(int i = 0; i < 5; i++) cnt[t[i] - '0']--;

    auto score = [](string S){
        V<ll> c(10);
        iota(ALL(c), 0);
        for(int i = 0; i < 5; i++){
            c[S[i] - '0'] *= 10;
        }
        return accumulate(ALL(c), 0);
    };

    ll win = 0;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            s.back() = '0' + i;
            t.back() = '0' + j;
            if(score(s) <= score(t)) continue;
            win += cnt[i] * (cnt[j] - (i == j));
        }
    }
    ll sum = k * 9 - 8;
    cout << (double)win / sum / (sum - 1) << endl;


    return 0;
}
