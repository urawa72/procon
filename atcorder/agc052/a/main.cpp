#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        // S+SのN番目の0と2N番目の0の間の距離は必ず2N
        // (前半Sの最後の0と後半Sの最後の0の間は必ず2N)
        // この2Nには1が必ずNこ含まれている
        string ans;
        for(int i = 0; i < n; i++) ans += '0';
        for(int i = 0; i < n; i++) ans += '1';
        ans += '0';
        cout << ans << endl;

    }

    return 0;
}
