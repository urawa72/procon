#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int a, b, n; cin >> a >> b >> n;
    for(int i = n; ; i++){
        if(i % a == 0 && i % b == 0){
            cout << i << endl;
            break;
        }
    }
}

