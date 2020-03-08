// https://atcoder.jp/contests/abc081/tasks/abc081_a
#include<iostream>
#include<string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < 3; i++) {
        if(s[i] == '1') { cnt++; }
    }
    cout << cnt << endl;
}
