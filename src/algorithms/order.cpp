#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int bit_count(int n){
    int count = 0;
    while(n > 0){
        if(n % 2 == 1) count++;
        n /= 2;
    }
    return count;
}

bool is_aho(int n){
    // 3の倍数
    if(n % 3 == 0) return true;
    // 3がつくか
    while(n > 0){
        if(n % 10 == 3) return true;
        n /= 10;
    }
    return false;
}

int binary_search(vector<int> &a, int v){
    int left = -1;
    int right = (int)a.size();
    while(right - left > 1){
        // 真ん中を決める
        int mid = left + (right - left) / 2;

        // vとの比較で範囲を半分にする
        if(a[mid] >= v) right = mid;
        else left = mid;
    }

    // leftは条件を満たさない最大の値、rightは条件を満たす最小の値
    return right;
}

int main() {
    OP("### 二進法展開 O(logN)");
    int n = 6;
    cout << bitset<8>(n) << endl;
    cout << bit_count(n) << endl;

    OP("### ナベアツO(logN)");
    if(is_aho(n)) OP("AHO");

    OP("### 二分探索 O(logN)");
    vector<int> a = {1, 2, 3, 4, 5, 6};
    OP(binary_search(a, 4));
}
