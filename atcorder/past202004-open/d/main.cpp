#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    int n = (int)s.size();
    set<string> se;
    for(int i = 0; i < n; i++){
        string tmp = s.substr(i, 1);
        se.insert(tmp);
        se.insert(".");
    }
    for(int i = 0; i < n - 1; i++){
        string tmp = s.substr(i, 2);
        se.insert(tmp);
        string tmp2 = tmp;
        tmp2[1] = '.';
        se.insert(tmp2), tmp2 = tmp;
        tmp2[0] = '.';
        se.insert(tmp2), tmp2 = tmp;
        se.insert("..");
    }
    for(int i = 0; i < n - 2; i++){
        string tmp = s.substr(i, 3);
        se.insert(tmp);
        string tmp2 = tmp;
        tmp2[0] = '.';
        se.insert(tmp2), tmp2 = tmp;
        tmp2[1] = '.';
        se.insert(tmp2), tmp2 = tmp;
        tmp2[2] = '.';
        se.insert(tmp2), tmp2 = tmp;
        tmp2[0] = '.', tmp2[1] = '.';
        se.insert(tmp2), tmp2 = tmp;
        tmp2[1] = '.', tmp2[2] = '.';
        se.insert(tmp2), tmp2 = tmp;
        tmp2[0] = '.', tmp2[2] = '.';
        se.insert(tmp2), tmp2 = tmp;
        se.insert("...");
    }

    cout << se.size() << endl;

    return 0;
}
