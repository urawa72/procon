#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int n, k;
string ans = "Nothing";
V<V<int> > v;

void dfs(vector<int> &A, int a){
    if(A.size() == n){
        int tmp = A[0];
        for(int i = 1; i < n; i++){
            tmp ^= A[i];
        }
        if(tmp == 0) ans = "Found";
        return;
    }

    for(int i = a; i < n; i++){
        for(int j = 0; j < k; j++){
            A.push_back(v[i][j]);
            dfs(A, i + 1);
            A.pop_back();
        }
    }
}

int main() {
    cin >> n >> k;
    v.assign(n, V<int>(k));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> v[i][j];
        }
    }

    V<int> A;
    dfs(A, 0);
    cout << ans << endl;
}
