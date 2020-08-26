#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int n, a, b, c;

int main() {
    int n; cin >> n;
    V<int> nums(3);
    for(int i = 0; i < n; i++) cin >> nums[i];
    sort(ALL(nums));
    int a = nums[0], b = nums[1], c = nums[2];

    if(n == a || n == b || n == c) {
        cout << "NO" << endl;
        return 0;
    }

    if(a + 1 == b && b + 1 == c) {
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i < 100; i++){
        if(n == 0) break;
        if(0 <= n - 3){
            if(n - 3 == a || n - 3 == b || n - 3 == c) {
                if(n - 2 == a || n - 2 == b || n - 2 == c)  n -= 1;
                else n -= 2;
            }else{
                n -= 3;
            }
        }else{
            if(0 <= n - 2) n -= 2;
            else n -= 1;
        }
    }
    if(n == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
