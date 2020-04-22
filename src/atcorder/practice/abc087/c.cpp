#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> a1(n);
    vector<int> a2(n);
    for(int i = 0; i < n; i++){
        cin >> a1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> a2[i];
    }

    int ans = 0, a1sum = 0;
    for(int i = 0; i < n; i++){
        a1sum += a1[i];
        int a2sum = 0;
        for(int j = i; j < n; j++){
            a2sum += a2[j];
        }
        ans = max(ans, a1sum + a2sum);
    }
    cout << ans << endl;
}
