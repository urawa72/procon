#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string t;
    for(int i = 0; i < n; i++){
        if(i == k - 1) t += s[i] + 32;
        else t += s[i];
    }
    cout << t << endl;

    return 0;
}
