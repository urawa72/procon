#include <bits/stdc++.h>
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

    V<P<char, int> > v;
    int cnt = 1;
    for(int i = 1; i <= s.size(); i++){
        if(s[i - 1] != s[i]){
            v.push_back(make_pair(s[i - 1], cnt));
            cnt = 1;
        }else{
            cnt++;
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << v[i].second;
    }
    cout << endl;
}
