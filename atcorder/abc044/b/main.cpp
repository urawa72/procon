#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }
    bool flag = true;
    for(int i = 0; i < m.size(); i++){
        if(m[i] % 2 != 0){
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
