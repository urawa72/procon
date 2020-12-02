#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    for(auto &a : {"", "A"}){
        for(auto &b : {"", "A"}){
            for(auto &c : {"", "A"}){
                for(auto &d : {"", "A"}){
                    string t = (string) a + "KIH" + b + "B" + c + "R" + d;
                    if(s == t){
                        cout << "YES" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}
