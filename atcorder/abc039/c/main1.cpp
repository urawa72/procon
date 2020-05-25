#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    string k = "WBWBWWBWBWBW";
    k = k + k + k;
    string s; cin >> s;
    if(s == k.substr(0, 20)) cout << "Do" << endl;
    if(s == k.substr(2, 20)) cout << "Re" << endl;
    if(s == k.substr(4, 20)) cout << "Mi" << endl;
    if(s == k.substr(5, 20)) cout << "Fa" << endl;
    if(s == k.substr(7, 20)) cout << "So" << endl;
    if(s == k.substr(9, 20)) cout << "La" << endl;
    if(s == k.substr(11, 20)) cout << "Si" << endl;
}

