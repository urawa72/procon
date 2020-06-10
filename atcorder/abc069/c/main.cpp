#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    ll cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        if(a % 4 == 0) cnt1++;
        if(a % 2 == 0) cnt2++;
    }

    if(cnt1 == 0){
        if(cnt2 == n){
            // 4で割りきれる数がなくても全て偶数ならOK
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else if((n % 2 == 1 && cnt1 % 2 == 1) || (n % 2 == 0 && cnt1 % 2 == 0)){
        // 4で割りきれる数の個数とnの偶奇が一致している時はOK
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
