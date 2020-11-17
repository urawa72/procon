#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    if(n == 0){
        cout << 1 << endl;
        return 0;
    }
    if(n == 1) {
        cout << "010" << endl;
        return 0;
    }

    string ans = "";
    if(n % 2 == 0){
        for(int i = 0; i < n / 2; i++){
            ans += '0';
        }
        ans += "1001";
        for(int i = 0; i < n / 2; i++){
            ans += '0';
        }
    }else{
        for(int i = 0; i < (n + 1) / 2; i++){
            ans += '0';
        }
        ans += "1001";
        for(int i = 0; i < n / 2; i++){
            ans += '0';
        }
    }
    cout << ans << endl;

    return 0;
}
