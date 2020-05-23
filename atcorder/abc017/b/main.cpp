#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string x; cin >> x;
    int n = x.size();

    bool flag = true;
    for(int i = 0; i < n; i++){
        if(x[i] == 'o' || x[i] == 'k' || x[i] == 'u'){
            continue;
        }else if(x[i] == 'c' && x[i + 1] == 'h'){
            i++;
            continue;
        }else{
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
