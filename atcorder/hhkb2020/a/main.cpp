#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    char s; cin >> s;
    char t; cin >> t;

    if (s == 'Y') {
        if(t == 'a') cout << 'A' << endl;
        if(t == 'b') cout << 'B' << endl;
        if(t == 'c') cout << 'C' << endl;
    }else{
        cout << t << endl;
    }

    return 0;
}
