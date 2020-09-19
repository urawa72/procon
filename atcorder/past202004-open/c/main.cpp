#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    for(int i = n - 1; i > 0; i--){
        for(int j = 0; j < 2 * n - 1; j++){
            if(s[i][j] == 'X') {
                if(0 <= j - 1 && s[i - 1][j - 1] == '#') s[i - 1][j - 1] = 'X';
                if(s[i - 1][j] == '#') s[i - 1][j] = 'X';
                if(j + 1 < 2 * n && s[i - 1][j + 1] == '#') s[i - 1][j + 1] = 'X';
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << s[i] << endl;
    }

    return 0;
}
