#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s, t; cin >> s >> t;

    int ss = s.size();
    int ts = t.size();

    bool flag = false;
    int p = 0;
    for(int i = 0; i < ss; i++){
        if(s[i] == '?' || s[i] == t[0]){
            int cnt = 1;
            for(int j = 1; j < ts; j++){
                if(s[i + j] == '?' || s[i + j] == t[j]) cnt++;
                else break;
            }
            if(cnt == ts){
                p = i;
                flag = true;
            }
        }
    }

    if(flag){
        for(int i = 0; i < ss; i++){
            if(p == i){
                cout << t;
                i += ts - 1;
            }else if(s[i] == '?'){
                cout << 'a';
            }else{
                cout << s[i];
            }
        }
        cout << "\n";
    }else{
        cout << "UNRESTORABLE" << endl;
    }
}
