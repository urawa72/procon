#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int k; cin >> k;
    string s; cin >> s;
    if(s.size() <= k) {
        cout << s << endl;
    }else{
        string tmp = s.substr(0, k);
        cout << tmp << "..." << endl;
    }
}
