#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;

int main() {
    string s;
    // スペースで区切って文字列取得
    getline(cin, s);
    stringstream ss(s);
    V<string> sv;
    string str;
    while (getline(ss, str, ' ')) {
        sv.push_back(str);
    }
    int n;
    cin >> n;
    V<string> ng(n);
    for (int i = 0; i < n; i++) cin >> ng[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (int)sv.size(); j++) {
            if (ng[i].size() == sv[j].size()) {
                bool ok = true;
                for (int k = 0; k < (int)ng[i].size(); k++) {
                    if (ng[i][k] == sv[j][k] || ng[i][k] == '*') continue;
                    ok = false;
                    break;
                }
                if (ok) {
                    string ans;
                    for (int l = 0; l < (int)sv[j].size(); l++) {
                        ans += '*';
                    }
                    sv[j] = ans;
                }
            }
        }
    }

    for (int i = 0; i < (int)sv.size(); i++) {
        cout << sv[i];
        if (sv.size() - 1 == i)
            cout << '\n';
        else
            cout << ' ';
    }

    return 0;
}
