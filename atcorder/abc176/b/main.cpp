#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;
    ll sum = 0;
    for(int i = 0; i < (int)s.size(); i++){
        sum += s[i] - '0';
    }
    if(sum % 9 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
