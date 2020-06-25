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
    int n; cin >> n;
    string s; cin >> s;

    if(n & 1) cout << "No" << endl;
    else if(s.substr(0, n / 2) == s.substr(n / 2, n / 2)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
