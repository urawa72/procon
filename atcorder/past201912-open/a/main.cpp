#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;
    for(int i = 0; i < 3; i++){
        if('a' <= s[i] && s[i] <= 'z'){
            cout << "error" << endl;
            return 0;
        }
    }
    int num = stoi(s);
    cout << num * 2 << endl;

    return 0;
}
