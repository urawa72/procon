#include <bits/stdc++.h>
#include <utility>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n; cin >> n;
    n = pow(2, n);
    V<P<int, int> > v(n);
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v[i] = make_pair(i, a);
    }

    while(2 < n){
        V<P<int, int> > w(n / 2 + 1);
        int p = 0;

        for(int i = 0; i < n; i+=2){
            if(v[i].second < v[i + 1].second){
                w[p] = make_pair(v[i + 1].first, v[i + 1].second);
            }else{
                w[p] = make_pair(v[i].first, v[i].second);
            }
            p += 1;
        }

        v = w;
        n /= 2;
    }

    if(v[0].second < v[1].second){
        cout << v[0].first + 1 << endl;
    }else{
        cout << v[1].first + 1 << endl;
    }


    return 0;
}
