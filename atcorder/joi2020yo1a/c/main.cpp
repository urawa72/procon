#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    deque<int> qa, qb;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        qa.push_back(a);
    }
    for(int i = 0; i < m; i++){
        int b; cin >> b;
        qb.push_back(b);
    }

    V<int> c;
    while(1){
        if(qa.empty() && qb.empty()) break;
        int a = qa.front();
        int b = qb.front();
        if(a == 0){
            c.push_back(b);
            qb.pop_front();
        }else if(b == 0){
            c.push_back(a);
            qa.pop_front();
        }else if(a <= b){
            c.push_back(a);
            qa.pop_front();
        }else{
            c.push_back(b);
            qb.pop_front();
        }
    }

    for(auto ans : c) cout << ans << endl;

    return 0;
}
