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

    if(s == "SUN") cout << 7 << endl;
    if(s == "MON") cout << 6 << endl;
    if(s == "TUE") cout << 5 << endl;
    if(s == "WED") cout << 4 << endl;
    if(s == "THU") cout << 3 << endl;
    if(s == "FRI") cout << 2 << endl;
    if(s == "SAT") cout << 1 << endl;

    return 0;
}
