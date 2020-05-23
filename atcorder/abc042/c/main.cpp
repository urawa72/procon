#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n, k; cin >> n >> k;
    V<int> d(k);
    for(int i = 0; i < k; i++) cin >> d[i];

    // 必ず解は存在するので上限なくて良い
    for(int i = n; i <= 1234567890; i++){
        bool flag = true;
        int sum = i;
        while(sum > 0){
            for(int j = 0; j < k; j++){
                if(sum % 10 != d[j]) continue;
                else flag = false;
            }
            if(!flag) break;
            sum /= 10;
        }
        if(flag){
            cout << i << endl;
            return 0;
        }
    }
}
