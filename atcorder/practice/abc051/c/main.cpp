#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;


int main() {
    int sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;
    int x = abs(tx - sx);
    int y = abs(ty - sy);
    vector<char> ans;
    for(int i = 0; i < y; i++) ans.push_back('U');
    for(int i = 0; i < x; i++) ans.push_back('R');
    for(int i = 0; i < y; i++) ans.push_back('D');
    for(int i = 0; i < x; i++) ans.push_back('L');
    ans.push_back('L');
    for(int i = 0; i < y + 1; i++) ans.push_back('U');
    for(int i = 0; i < x + 1; i++) ans.push_back('R');
    ans.push_back('D');
    ans.push_back('R');
    for(int i = 0; i < y + 1; i++) ans.push_back('D');
    for(int i = 0; i < x + 1; i++) ans.push_back('L');
    ans.push_back('U');
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }
    cout << endl;

}
