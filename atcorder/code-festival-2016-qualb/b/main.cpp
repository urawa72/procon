#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;

    int an = 0, bn = 0, bm = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'c') cout << "No" << endl;
        if(s[i] == 'a'){
            if(an + bn < a + b){
                cout << "Yes" << endl;
                an++;
            }else{
                cout << "No" << endl;
            }
        }
        if(s[i] == 'b'){
            bm++;
            if(an + bn < a + b && bm <= b){
                cout << "Yes" << endl;
                bn++;
            }else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
