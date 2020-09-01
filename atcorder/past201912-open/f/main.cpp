#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    set<string> se;
    V<P<string, string> > v;
    int cnt1 = 0, cnt2 = 0, start = 0;
    for(int i = 0; i < (int)s.size(); i++){
        cnt2++;
        if('A' <= s[i] && s[i] <= 'Z'){
            if(cnt1 == 0) start = i;
            cnt1++;
        }
        if(cnt1 == 2){
            string tmp = s.substr(start, cnt2);
            string ori = tmp;
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            v.push_back({tmp, ori});
            cnt1 = 0;
            cnt2 = 0;
        }
    }
    sort(ALL(v));
    for(auto p : v){
        cout << p.second;
    }
    cout << '\n';


    return 0;
}
