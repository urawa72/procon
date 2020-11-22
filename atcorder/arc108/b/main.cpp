#include <bits/stdc++.h>
#include <deque>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    string s; cin >> s;
    deque<char> q;

    int ans = 0;
    for(int i = 0; i < n; i++){
        q.push_back(s[i]);
        if(3 <= q.size()){
            char x = q.back(); q.pop_back();
            char o = q.back(); q.pop_back();
            char f = q.back(); q.pop_back();
            if(f == 'f' && o == 'o' && x == 'x') ans++;
            else{
                q.push_back(f);
                q.push_back(o);
                q.push_back(x);
            }
        }
    }
    cout << n - ans * 3 << endl;

    return 0;
}
