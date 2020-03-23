#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    string s; cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());
    if(rev != s){
        cout << "No" << endl;
        return 0;
    }

    int n = s.length();
    int i = n / 2;
    string si1 = s.substr(0, i);
    string rev1 = si1;
    reverse(rev1.begin(), rev1.end());
    if(rev1 != si1){
        cout << "No" << endl;
        return 0;
    }

    int j = (n + 3) / 2 - 1;
    string sjn = s.substr(j, n - 1);
    string rev2 = sjn;
    reverse(rev2.begin(), rev2.end());
    if(rev2 != sjn){
        cout << "No" << endl;
        return 0;
    }

    OP("Yes");
}
