#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;

    // 'A'と'a'の差は32
    if(islower(s[0])){
        char c = s[0] - 32;
        cout << c;
    }else{
        cout << s[0];
    }
    for(int i = 1; i < s.size(); i++){
        if(isupper(s[i])){
            char c = s[i] + 32;
            cout << c;
        }else{
            cout << s[i];
        }
    }
    cout << endl;
}
