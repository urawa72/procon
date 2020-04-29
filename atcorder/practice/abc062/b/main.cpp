#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int h, w; cin >> h >> w;
    vector<string> a(h);
    for(int i = 0; i < h; i++) cin >> a[i];

    for(int i = 0; i <= w + 1; i++) cout << "#";
    cout << endl;

    for(int i = 0; i < h; i++){
        cout << "#";
        cout << a[i];
        cout << "#" << endl;
    }

    for(int i = 0; i <= w + 1; i++) cout << "#";
    cout << endl;
}
