#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    string a, b, c; cin >> a >> b >> c;
    queue<char> qa, qb, qc;
    for(int i = 0; i < a.size(); i++) qa.push(a[i]);
    for(int i = 0; i < b.size(); i++) qb.push(b[i]);
    for(int i = 0; i < c.size(); i++) qc.push(c[i]);

    char next = 'a', ans = 'D';
    int an = a.size(), bn = b.size(), cn = c.size();
    while(1){
        if(next == 'a'){
            if(an == 0){
                ans = 'A';
                break;
            }
            next = qa.front();
            qa.pop();
            an--;
        }
        if(next == 'b'){
            if(bn == 0){
                ans = 'B';
                break;
            }
            next = qb.front();
            qb.pop();
            bn--;
        }
        if(next == 'c'){
            if(cn == 0){
                ans = 'C';
                break;
            }
            next = qc.front();
            qc.pop();
            cn--;
        }
    }
    cout << ans << endl;
}
