#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    V<int> sum(100010);
    sum[1] = 1;
    for(int i = 2; i <= 100000; i++){
        sum[i] = sum[i - 1] + i;
    }

    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < (int)s.size() - 1; i++){
        if(s[i] == '2' && s[i + 1] == '5'){
            cnt++;
            i++;
        }else{
            ans += sum[cnt];
            cnt = 0;
        }
    }
    ans += sum[cnt];
    cout << ans << endl;

    return 0;
}
