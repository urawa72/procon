#include <bits/stdc++.h>
using namespace std;

void dfs(int i, string s, string f, int sum) {
    if(i == 4) {
        if(sum == 7) {
            cout << f;
            cout << "=7" << endl;
            exit(0);
        }
        return;
    }

    string f2 = f+'+'+s[i];
    int sum2 = sum+(s[i]-'0');
    dfs(i+1,s,f2,sum2);

    f2 = f+'-'+s[i];
    sum2 = sum-(s[i]-'0');
    dfs(i+1,s,f2,sum2);

    return;
}


int main() {
    string s;
    cin >> s;
    string f;
    f += s[0];
    int sum = s[0]-'0';
    dfs(1,s,f,sum);
}
