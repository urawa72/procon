#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    string s; cin >> s;
    int y = stoi(s.substr(0, 4));
    int m = stoi(s.substr(5, 2));
    int d = stoi(s.substr(8, 2));

    for(int i = m; i <= 12; i++){
        int md = 31;
        if(m == 4 || m == 6 || m == 9 || m == 11) md = 30;
        if(m == 2) md = 28;
        // 閏年の判定
        if(y % 4 == 0 && (y % 100 != 0 || y % 400 == 0) && m == 2) md = 29;
        if(i != m) d = 1;
        for(int j = d; j <= md; j++){
            if(y % i == 0 && (y / i) % j == 0){
                printf("%d/%02d/%02d\n", y, i, j);
                return 0;
            }
        }
    }
    // 0埋め出力
    printf("%d/%02d/%02d\n", y + 1, 1, 1);


    return 0;
}
