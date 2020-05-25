#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    string s; cin >> s;
    string key = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";
    if(s == key.substr(0, 20)) cout << "Do" << endl;
    if(s == key.substr(2, 20)) cout << "Re" << endl;
    if(s == key.substr(4, 20)) cout << "Mi" << endl;
    if(s == key.substr(5, 20)) cout << "Fa" << endl;
    if(s == key.substr(7, 20)) cout << "So" << endl;
    if(s == key.substr(9, 20)) cout << "La" << endl;
    if(s == key.substr(11, 20)) cout << "Si" << endl;
}
