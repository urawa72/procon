#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> a(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        x--;
        a[i] = x;
    }

    V<int> ans;
    for(int i = 0; i < n; i++){
        int j = a[i];
        int c = 0;
        while(1) {
            c++;
            if(i == j) break;
            j = a[j];
        }
        ans.push_back(c);
    }

    for(int i = 0; i < n; i++){
        if(i == n - 1) cout << ans[i] << '\n';
        else cout << ans[i] << ' ';
    }

    return 0;
}
