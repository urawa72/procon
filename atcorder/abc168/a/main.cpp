#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string s; cin >> s;
    int n = s.size();
    if(s[n - 1] == '2' || s[n - 1] == '4' || s[n - 1] == '5' || s[n - 1] == '7' || s[n - 1] == '9'){
        cout << "hon" << endl;
    }else if(s[n - 1] == '0' || s[n - 1] == '1' || s[n - 1] == '6' || s[n - 1] == '8'){
        cout << "pon" << endl;
    }else if(s[n - 1] == '3'){
        cout <<"bon" << endl;
    }
}
