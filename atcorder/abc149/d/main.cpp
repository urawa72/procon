#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n, k; cin >> n >> k;
    int r, s, p; cin >> r >> s >> p;
    string t; cin >> t;

    V<char> memo(n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(k <= i){
            if(t[i] == t[i - k]){
                if(t[i] == 'r'){
                    if(memo[i - k] != 'p'){
                        ans += p;
                        memo[i] = 'p';
                    }else{
                        memo[i] = 's';
                        continue;
                    }
                }
                if(t[i] == 's'){
                    if(memo[i - k] != 'r'){
                        ans += r;
                        memo[i] = 'r';
                    }else{
                        memo[i] = 'p';
                        continue;
                    }
                }
                if(t[i] == 'p'){
                    if(memo[i - k] != 's'){
                        ans += s;
                        memo[i] = 's';
                    }else{
                        memo[i] = 'r';
                        continue;
                    }
                }
            }else{
                if(t[i] == 'r'){
                    ans += p;
                    memo[i] = 'p';
                }
                if(t[i] == 's'){
                    ans += r;
                    memo[i] = 'r';
                }
                if(t[i] == 'p'){
                    ans += s;
                    memo[i] = 's';
                }
            }
        }else{
            if(t[i] == 'r'){
                ans += p;
                memo[i] = 'p';
            }
            if(t[i] == 's'){
                ans += r;
                memo[i] = 'r';
            }
            if(t[i] == 'p'){
                ans += s;
                memo[i] = 's';
            }
        }
    }
    cout << ans << endl;
}
