#include <bits/stdc++.h>

#include <map>
#include <queue>
#include <shared_mutex>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main() {
    string s;
    cin >> s;

    map<string, int> m;
    queue<string> q;

    m[s] = 0;
    q.push(s);

    // BFS
    while (!q.empty()) {
        string cur = q.front();
        q.pop();

        if (cur == "atcoder") {
            cout << m[cur] << endl;
            return 0;
        }

        for (int i = 1; i < 7; i++) {
            string next = cur;
            swap(next[i - 1], next[i]);
            if (m.find(next) == m.end()) {
                q.push(next);
                m[next] = m[cur] + 1;
            }
        }
    }

    return 0;
}
