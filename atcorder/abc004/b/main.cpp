#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    V<V<char> > s(4, V<char>(4));
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> s[i][j];
        }
    }

    for(int i = 3; i >= 0; i--){
        cout << s[i][3] << " " << s[i][2] << " " << s[i][1] << " " << s[i][0] << endl;
    }
}
