#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    V<string> vs;
    while(1){
        string s; cin >> s;
        if(s == "") break;
        vs.push_back(s);
    }

    for(int i = 0; i < vs.size(); i++){
        if(vs[i] == "Left") cout << '<';
        if(vs[i] == "Right") cout << '>';
        if(vs[i] == "AtCoder") cout << 'A';
        if(i != vs.size() - 1) cout << " ";
        else cout << "\n";
    }

    return 0;
}
