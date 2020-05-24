#include <bits/stdc++.h>
#include <utility>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int N = 0;
double ANS = 0;
double CNT = 0;
vector<pair<int, int> > VEC;

void calc(const vector<int>& nums){
    double tmp = 0;
    rep(i, N - 1){
        double xy1 = pow((VEC[nums[i] - 1].first - VEC[nums[i + 1] - 1].first), 2.0);
        double xy2 = pow((VEC[nums[i] - 1].second - VEC[nums[i + 1] - 1].second), 2.0);
        double sum = sqrt(xy1 + xy2);
        tmp += sum;
    }
    ANS += tmp;
    CNT++;
}

int main() {
    cin >> N;
    vector<int> nums(N);
    iota(nums.begin(), nums.end(), 1);

    rep(i, N){
        int x, y; cin >> x >> y;
        VEC.push_back(make_pair(x, y));
    }

    do {
        calc(nums);
    } while(next_permutation(nums.begin(), nums.end()));
    ANS = ANS / CNT;
    printf("%.10lf\n", ANS);
}


