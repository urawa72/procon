#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int h1, w1, h2, w2;
    cin >> h1 >> w1 >> h2 >> w2;
    if(h1 == h2 || w1 == w2){
        cout << "YES" << endl;
    }else if(h1 == w2 || w1 == h2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
