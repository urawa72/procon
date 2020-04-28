#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        v[i] = a;
    }
    int s = v[1];
    int ans = 0;
    // 1から順番にボタンを押してn回までに2に到達するか
    while(1){
        ans++;
        if(n < ans) break;
        if(s != 2){
            s = v[s];
        }else{
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
