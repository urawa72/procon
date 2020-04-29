#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

void printVec(const vector<int>& vec){
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);
    printVec(nums);
    do {
        printVec(nums);
    } while(next_permutation(nums.begin(), nums.end()));
}


