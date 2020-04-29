#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string a, b; cin >> a >> b;
    if(b.size() < a.size()){
        cout << "GREATER" << endl;
    }else if(a.size() < b.size()){
        cout << "LESS" << endl;
    }else{
        if(b < a) cout << "GREATER" << endl;
        else if(a < b) cout << "LESS" << endl;
        else cout << "EQUAL" << endl;
    }
}
