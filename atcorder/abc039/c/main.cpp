#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string key = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";
    string s; cin >> s;

    for(int i = 0; i < 12; i++){
        if(s == key.substr(i, 20)){
            if(i == 0) cout << "Do" << endl;
            if(i == 2) cout << "Re" << endl;
            if(i == 4) cout << "Mi" << endl;
            if(i == 5) cout << "Fa" << endl;
            if(i == 7) cout << "So" << endl;
            if(i == 9) cout << "La" << endl;
            if(i == 11) cout << "Si" << endl;
            return 0;
        }
    }

    return 0;
}
