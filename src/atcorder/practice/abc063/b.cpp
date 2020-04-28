#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string s; cin >> s;
    map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }

    for(auto p : m){
        if(p.second > 1){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
}
