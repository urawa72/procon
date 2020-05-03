#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    deque<int> d;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') d.push_back(0);
        if(s[i] == '1') d.push_back(1);
        if(s[i] == 'B'){
            if(d.size() == 0) continue;
            else d.pop_back();
        }
    }
    for(int i = 0; i < d.size(); i++){
        cout << d[i];
    }
    cout << endl;
}
