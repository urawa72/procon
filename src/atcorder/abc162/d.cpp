#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    map<char, ll> m;
    for(int i = 0; i < N; i++){
        m[S[i]]++;
    }
    ll sum = m['R'] * m['G'] * m['B'];
    ll cnt = 0;
    for(int i = 0; i < N; i++){
        // indexの間隔を1ずつふやす
        for(int j = i + 1; j < N; j++){
            // 同じ文字だったらはじく
            if(S[i] == S[j]) continue;
            // 3文字目のindexを計算
            int k = j * 2 - i;
            // 範囲外または同じ文字ならはじく
            if(k >= N || S[k] == S[i] || S[k] == S[j]) continue;
            cnt++;
        }
    }
    cout << sum - cnt << endl;
}
