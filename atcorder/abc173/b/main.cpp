#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;
    V<int> a(4);
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(s == "AC") a[0]++;
        if(s == "WA") a[1]++;
        if(s == "TLE") a[2]++;
        if(s == "RE") a[3]++;
    }

    for(int i = 0; i < 4; i++){
        if(i == 0) cout << "AC x " << a[0] << endl;
        if(i == 1) cout << "WA x " << a[1] << endl;
        if(i == 2) cout << "TLE x " << a[2] << endl;
        if(i == 3) cout << "RE x " << a[3] << endl;
    }

    return 0;
}
