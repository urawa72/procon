#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    string s; cin >> s;
    string t; cin >> t;

    int cnt = 0;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] != t[i]) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
