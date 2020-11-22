#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, x; cin >> n >> x;
    string s; cin >> s;

    for(int i = 0; i < n; i++){
        if(s[i] == 'o') x++;
        else{
            if(x == 0) continue;
            else x--;
        }
    }
    cout << x << endl;

    return 0;
}
