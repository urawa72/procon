#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    map<char, int> m;
    m['A'] = 0;
    m['B'] = 0;
    m['C'] = 0;
    m['D'] = 0;
    m['E'] = 0;
    m['F'] = 0;

    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }

    for(auto p : m){
        if(p.first == 'F') cout << p.second << endl;
        else cout << p.second << " ";
    }
}
