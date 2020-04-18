#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

ll N;
int ANS = 0;
int sft[] = {7, 5, 3};

void dfs(ll sum, map<int, int> m1){
    if(sum <= N){
        if(m1[3] && m1[5] && m1[7]) ANS++;

        for(auto n : sft){
            map<int, int> m2;
            m2 = m1;
            m2[n] = 1;
            dfs(sum * 10 + n, m2);
        }
    }
}

int main() {
    cin >> N;
    map<int, int> m;
    dfs(0, m);
    cout << ANS << endl;
}









