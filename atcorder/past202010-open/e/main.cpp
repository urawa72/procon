#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    string s; cin >> s;
    string os = s;

    sort(ALL(s));
    do {
        if(s != os && s != string(os.rbegin(), os.rend())){
            cout << s << endl;
            return 0;
        }
    } while(next_permutation(ALL(s)));

    cout << "None" << endl;

    return 0;
}
