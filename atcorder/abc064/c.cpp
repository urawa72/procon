#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    map<int, int> m;
    int l = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a <= 399) m[1]++;
        else if(a <= 799) m[2]++;
        else if(a <= 1199) m[3]++;
        else if(a <= 1599) m[4]++;
        else if(a <= 1999) m[5]++;
        else if(a <= 2399) m[6]++;
        else if(a <= 2799) m[7]++;
        else if(a <= 3199) m[8]++;
        else l++;
    }
    int min = m.size();
    int max = m.size();
    if(min == 0 && l) min = 1;
    if(l) max += l;
    cout << min << " " << max << endl;
}

