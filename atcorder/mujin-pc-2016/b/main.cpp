#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;
const double PI = acos(-1);


int main() {
    double oa, ab, bc; cin >> oa >> ab >> bc;

    double s = pow((oa + ab + bc), 2) * PI;
    if(oa + ab < bc){
        s -= pow(bc - (oa + ab), 2) * PI;
    }
    if(oa + bc < ab){
        s -= pow(ab - (oa + bc), 2) * PI;
    }
    if(ab + bc < oa){
        s -= pow((oa - (ab + bc)), 2) * PI;
    }
    printf("%.10f\n", s);

    return 0;
}
