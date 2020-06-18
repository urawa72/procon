#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    string s; cin >> s;
    map<char, int> m;
    for(int i = 0; i < 4; i++){
        m[s[i]]++;
    }

    if(m.size() == 2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
