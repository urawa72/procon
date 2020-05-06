#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;

int n;
char al[] = { 'a', 'b', 'c' };

void dfs(V<char> &A){
    if(A.size() == n){
        for(int i = 0; i < n; i++) cout << A[i];
        cout << endl;
        return;
    }

    for(int i = 0; i < 3; i++){
        A.push_back(al[i]);
        dfs(A);
        A.pop_back();
    }
}

int main() {
    cin >> n;
    V<char> v;
    dfs(v);
}
