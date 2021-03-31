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
    int s; cin >> s;
    int a = s / 100;
    int b = s % 100;

    if(0 < a && a <= 12){
        if(0 < b && b <= 12){
            cout << "AMBIGUOUS" << endl;
        }else{
            cout << "MMYY" << endl;
        }
    }else{
        if(0 < b && b <= 12){
            cout << "YYMM" << endl;
        }else{
            cout << "NA" << endl;
        }
    }

    return 0;
}
