#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int n;
V<V<int> > v;
int ans = -10000001;

void dfs(vector<int> &A){
    if(A.size() == n){
        V<int> x, y, z;
        for(int i = 0; i < n; i++){
            if(A[i] == 0) x.push_back(i);
            if(A[i] == 1) y.push_back(i);
            if(A[i] == 2) z.push_back(i);
        }
        int sum = 0;
        if(0 < x.size()) {
            for(int i = 0; i < x.size(); i++){
                for(int j = i + 1; j < x.size(); j++){
                    sum += v[x[i]][x[j]];
                }
            }
        }
        if(0 < y.size()) {
            for(int i = 0; i < y.size(); i++){
                for(int j = i + 1; j < y.size(); j++){
                    sum += v[y[i]][y[j]];
                }
            }
        }
        if(0 < z.size()) {
            for(int i = 0; i < z.size(); i++){
                for(int j = i + 1; j < z.size(); j++){
                    sum += v[z[i]][z[j]];
                }
            }
        }
        ans = max(ans, sum);
        return;
    }

    for(int i = 0; i < 3; i++){
        A.push_back(i);
        dfs(A);
        A.pop_back();
    }
}

int main() {
    cin >> n;
    v.resize(n - 1);
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n; j++){
            if(j <= i) v[i].push_back(0);
            else{
                int a; cin >> a;
                v[i].push_back(a);
            }
        }
    }

    V<int> A;
    dfs(A);
    cout << ans << endl;


    return 0;
}
