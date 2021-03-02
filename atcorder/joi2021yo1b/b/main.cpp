#include <AvailabilityInternal.h>
#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (c == 0 && s[i] == 'I') c++;
        if (c == 1 && s[i] == 'O') c++;
        if (c == 2 && s[i] == 'I') c++;
    }
    if (c == 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
