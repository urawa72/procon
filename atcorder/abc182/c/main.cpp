#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    int sum = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        sum += (s[i] - '0');
    }

    if(sum % 3 == 0){
        cout << 0 << endl;
        return 0;
    }else{
        for(int i = 0; i < n; i++){
            int tmp = (s[i] - '0');
            if((sum - tmp) % 3 == 0 && 1 < n){
                cout << 1 << endl;
                return 0;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int tmp = (s[i] - '0') + (s[j] - '0');
                if((sum - tmp) % 3 == 0 && 2 < n){
                    cout << 2 << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;

    return 0;
}
