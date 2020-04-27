#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string s; cin >> s;
    vector<int> n(26, 0);
    for(int i = 0; i < s.size(); i++){
        int j = s[i] - 97;
        n[j]++;
    }
    for(int i = 0; i < n.size(); i++){
        if(n[i] == 0){
            char c = i + 97;
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}
