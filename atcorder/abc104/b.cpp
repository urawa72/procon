#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REPE(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;


int main() {
    string s; cin >> s;
    int len = s.length();
    bool flag = true;
    if(s[0] == 'A'){
        int cnt = 0;
        for(int i = 2; i < len - 1; i++){
            if(s[i] == 'C') cnt++;
        }
        if(cnt == 1){
            for(int i = 1; i < len; i++){
                if(s[i] == 'C'){
                    if(cnt == 1){
                        cnt--;
                        continue;
                    }else{
                        flag = false;
                        break;
                    }
                }
                if('a' <= s[i] && s[i] <= 'z'){
                    continue;
                }else{
                    flag = false;
                    break;
                }
            }
        }else{
            flag = false;
        }
    }else{
        flag = false;
    }
    if(flag) cout << "AC" << endl;
    else cout << "WA" << endl;
}
