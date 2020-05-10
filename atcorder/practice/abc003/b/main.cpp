#include <bits/stdc++.h>
#include <string>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    string t; cin >> t;

    char c[] = { 'a', 't', 'c', 'o', 'd', 'e', 'r' };
    for(int i = 0; i < s.size(); i++){
        if(s[i] == t[i]) continue;
        if(s[i] == '@'){
            bool ok = false;
            for(int j = 0; j < 7; j++){
                if(t[i] == c[j]){
                    ok = true;
                    break;
                }
            }
            if(!ok){
                cout << "You will lose" << endl;
                return 0;
            }
        }else if(t[i] == '@'){
            bool ok = false;
            for(int j = 0; j < 7; j++){
                if(s[i] == c[j]){
                    ok = true;
                    break;
                }
            }
            if(!ok){
                cout << "You will lose" << endl;
                return 0;
            }
        }else{
            cout << "You will lose" << endl;
            return 0;
        }
    }
    cout << "You can win" << endl;
}
