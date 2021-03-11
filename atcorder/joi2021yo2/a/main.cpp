#include <bits/stdc++.h>

using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int N, A;
    string S;
    cin >> N >> A >> S;

    int l = A - 1, r = A - 1, n = A - 1, d = 1, cnt = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '#') cnt++;
    }

    long long ans = 0;
    while (cnt > 0) {
        if (d == 1) {
            ans++, n++;
            if (n < N) r = n;
            if (n == N || S[n] == '#') {
                if (n < N) cnt--;
                d = -1;
                if (cnt > 0) ans += n - l, n = l;  // skip
            }
        } else {
            ans++, n--;
            if (n >= 0) l = n;
            if (n == -1 || S[n] == '#') {
                if (n >= 0) cnt--;
                d = 1;
                if (cnt > 0) ans += r - n, n = r;  // skip
            }
        }
    }
    cout << ans << endl;
}
