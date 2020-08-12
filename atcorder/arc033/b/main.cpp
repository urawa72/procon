#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n, m; cin >> n >> m;
    set<int> sa, sb;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        sa.insert(a);
    }
    for(int i = 0; i < m; i++){
        int b; cin >> b;
        sb.insert(b);
    }

    int com = 0;
    set<int> sum;
    for(auto num : sa){
        if(sb.find(num) != sb.end()) com++;
        sum.insert(num);
    }
    for(auto num : sb){
        sum.insert(num);
    }

    double ans = (double)com / (double)sum.size();
    printf("%.10f", ans);

    return 0;
}
