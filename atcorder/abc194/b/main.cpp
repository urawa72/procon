#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    int ma1 = 100001, ma2 = 100001;
    int pa1 = -2;
    for(int i = 0; i < n; i++){
        if(a[i] < ma1){
            pa1 = i;
            ma1 = a[i];
        }
    }
    sort(ALL(a));
    ma2 = a[1];

    int mb1 = 100001, mb2 = 100001;
    int pb1 = -1;
    for(int i = 0; i < n; i++){
        if(b[i] < mb1){
            pb1 = i;
            mb1 = b[i];
        }
    }
    sort(ALL(b));
    mb2 = b[1];


    if(pa1 == pb1) cout << min({(ma1 + mb1), max(ma1, mb2), max(ma2, mb1)}) << endl;
    else cout << max(ma1, mb1) << endl;

    return 0;
}
