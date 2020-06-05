#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    vector<vector<int> > c(3, vector<int>(3));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> c[i][j];
        }
    }

    // もっとシンプルにかける
    bool flag = false;
    for(int i = 0; i <= 100; i++){
        int b1 = c[0][0] - i;
        int b2 = c[0][1] - i;
        int b3 = c[0][2] - i;
        if(b1 < 0 || b2 < 0 || b3 < 0) continue;
        int a2b1 = c[1][0] - b1;
        int a2b2 = c[1][1] - b2;
        int a2b3 = c[1][2] - b3;
        if(a2b1 < 0 || a2b2 < 0 || a2b3 < 0) continue;
        if(a2b1 != a2b2 || a2b2 != a2b3 || a2b1 != a2b3) continue;
        int a3b1 = c[2][0] - b1;
        int a3b2 = c[2][1] - b2;
        int a3b3 = c[2][2] - b3;
        if(a3b1 < 0 || a3b2 < 0 || a3b3 < 0) continue;
        if(a3b1 != a3b2 || a3b2 != a3b3 || a3b1 != a3b3) continue;
        flag = true;
        break;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}
