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
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    int sum = 0;
    for(auto p : mp){
        if(p.first == 'A') sum += p.second * 4;
        if(p.first == 'B') sum += p.second * 3;
        if(p.first == 'C') sum += p.second * 2;
        if(p.first == 'D') sum += p.second * 1;
    }

    double ans = (double)sum / (double)n;
    printf("%.14f", ans);

    return 0;
}
