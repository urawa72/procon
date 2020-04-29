#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    // stringだと冗長
    // string s; cin >> s;
    // string a = "";
    // string b = "";
    // a += s[0];
    // a += s[1];
    // b += s[2];
    // b += s[3];
    //
    // int ia = stoi(a);
    // int ib = stoi(b);
    //
    // int cnt = 0;
    // // MMYY
    // if(
    //     1 <= ia && ia <= 12 &&
    //     0 <= ib && ib <= 99
    // ) cnt++;
    // // YYMM
    // if(
    //     1 <= ib && ib <= 12 &&
    //     0 <= ia && ia <= 99
    // ) cnt += 2;
    //
    // if(cnt == 0){
    //     OP("NA");
    // }else if(cnt == 1){
    //     OP("MMYY");
    // }else if(cnt == 2){
    //     OP("YYMM");
    // }else{
    //     OP("AMBIGUOUS");
    // }

    int s; cin >> s;
    int L = s / 100; // 上二桁
    int R = s % 100; // 下二桁
    if(1 <= L && L <= 12){
        if(1<= R && R <= 12){
            OP("AMBIGUOUS");
        }else{
            OP("MMYY");
        }
    }else{
        if(1 <= R && R <= 12){
            OP("YYMM");
        }else{
            OP("NA");
        }
    }
}
