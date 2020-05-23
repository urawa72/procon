#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;

int n, k;
V<V<int> > v;
string ans = "Nothing";

void dfs(V<int> &A, int d){
    if(A.size() == n){
        int x = A[0];
        for(int i = 1; i < n; i++){
            x = x ^ A[i];
        }
        if(x == 0){
            ans = "Found";
            return;
        }
    }
    if(d >= n) return;

    for(int j = 0; j < k; j++){
        A.push_back(v[d][j]);
        dfs(A, d + 1);
        A.pop_back();
    }
}

int main() {
    cin >> n >> k;
    v.resize(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            int t; cin >> t;
            v[i].push_back(t);
        }
    }

    V<int> A;
    for(int i = 0; i < k; i++){
        A.push_back(v[0][i]);
        dfs(A, 1);
        A.pop_back();
    }
    cout << ans << endl;
}

