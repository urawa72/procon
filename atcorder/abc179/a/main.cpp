#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;
    int n = (int)s.size();
    if(s[n - 1] == 's') {
        cout << s + "es" << endl;
    }else{
        cout << s + 's' << endl;
    }

    return 0;
}
