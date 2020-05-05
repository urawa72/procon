#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;

    int n = s.size();
    int ans = 0, i = 0;
    bool flag = false;
    while(i < n){
        if(s[i] == '+'){
            if(!flag) ans++;
            flag = false;
            i++;
        }else{
            if(s[i] == '0') flag = true;
            i++;
        }
    }
    // 最後の判定
    if(!flag) ans++;

    cout << ans << endl;
}
