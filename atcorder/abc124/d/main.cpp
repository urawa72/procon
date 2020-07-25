#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    // 尺取法
    V<int> nums;
    int cnt = 1;
    // 両端が0だったら「0個の1」として0を追加する
    // 区間集計しやすくする
    if(s[0] == '0') nums.push_back(0);
    for(int i = 0; i < n; i++){
        if(s[i] == s[i + 1]) cnt++;
        else{
            nums.push_back(cnt);
            cnt = 1;
        }
    }
    if(s[n - 1] == '0') nums.push_back(0);

    int m = nums.size();
    // forループ外にleftとrightを持つ
    int left = 0, right = 0;
    int ans = 0;
    int tmp = 0; // [left,right]の総和
    for(int i = 0; i < m; i+=2){
        // 次のleftとrightを計算する
        int nleft = i;
        int nright = min(i + 2 * k + 1, m);

        // 左端を移動
        while(nleft > left){
            tmp -= nums[left];
            left++;
        }
        // 右端を移動
        while(nright > right){
            tmp += nums[right];
            right++;
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;

    // 累積和
    // int cnt = 1;
    // V<int> v;
    // // 偶数番目を1の個数にするため
    // // 最初が0だったら「0個の1」として0を追加する
    // if(s[0] == '0') v.push_back(0);
    // for(int i = 0; i < n; i++){
    //     if(s[i] == s[i + 1]) cnt++;
    //     else{
    //         v.push_back(cnt);
    //         cnt = 1;
    //     }
    // }
    //
    // // 累積和
    // V<int> w((int)v.size() + 1, 0);
    // for(int i = 0; i < (int)v.size(); i++){
    //     w[i + 1] = w[i] + v[i];
    // }
    //
    // int ans = 0;
    // int m = w.size();
    // for(int i = 0; i < m; i+=2){
    //     // iからi+2k+1の総和の最大値
    //     int j = i + k * 2 + 1;
    //     // 添字超えたら常に最後の添字にする
    //     if(j >= m) j = m - 1;
    //     ans = max(ans, w[j] - w[i]);
    // }
    // cout << ans << endl;

    return 0;
}
