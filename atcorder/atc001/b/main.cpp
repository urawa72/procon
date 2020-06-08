#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

int n, q;
V<int> par;
V<int> ran;

// n要素で初期化
void init(int n){
    for(int i = 0; i < n; i++){
        par[i] = i;
        ran[i] = 0;
    }
}

// 木の根を決める
int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
}

// xとy属する集合を併合
void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(ran[x] < ran[y]){
        par[x] = y;
    }else{
        par[y] = x;
        if(ran[x] == ran[y]) ran[x]++;
    }
}

// xとyが同じ集合に属するか否か
bool same(int x, int y){
    return find(x) == find(y);
}

int main() {
   cin >> n >> q;
   par.resize(n);
   ran.resize(n);
   init(n);
   for(int i = 0; i < q; i++){
       int p, a, b; cin >> p >> a >> b;
       if(p){
           if(same(a, b)) cout << "Yes" << endl;
           else cout << "No" << endl;
       }else{
           unite(a, b);
       }
   }
}
