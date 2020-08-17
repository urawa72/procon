#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    V<int> e(6), l(6);
    for(int i = 0; i < 6; i++) cin >> e[i];
    int b; cin >> b;
    for(int i = 0; i < 6; i++) cin >> l[i];

    int cnt = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(e[i] == l[j]) cnt++;
        }
    }

    if(cnt == 5){
        for(int i = 0; i < 6; i++){
            if(l[i] == b){
                cout << 2 << endl;
                return 0;
            }
        }
        cout << 3 << endl;
        return 0;
    }else if(2 < cnt){
        if(cnt == 6) cout << 1 << endl;
        if(cnt == 4) cout << 4 << endl;
        if(cnt == 3) cout << 5 << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}
