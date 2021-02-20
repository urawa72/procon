#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <string>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;



int main() {
    ll n, k; cin >> n >> k;

    string s1 = to_string(n);
    sort(ALL(s1));
    string s2 = s1;
    reverse(ALL(s2));
    ll nex = n;
    for(int i = 0; i < k; i++){
        ll n1 = stoll(s1);
        ll n2 = stoll(s2);
        nex = n2 - n1;
        s1 = to_string(nex);
        sort(ALL(s1));
        s2 = s1;
        reverse(ALL(s2));
    }
    cout << nex << endl;


    return 0;
}
