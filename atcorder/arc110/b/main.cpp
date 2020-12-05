#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    string t; cin >> t;

    ll a = 10000000000;

    if(t == "1"){
        cout << a * 2 << endl;
    }else if(t == "11"){
        cout << a << endl;
    }else{
        // 0の数 = tが現れるために最低限必要な"110"の個数
        ll z = 0;
        for(int i = 0; i < n; i++){
            if(t[i] == '0') z++;
        }

        // zの数を考慮してsを作成("1101"の場合もあるためz+1しておく)
        string s = "";
        for(int i = 0; i < z + 1; i++){
            s += "110";
        }

        // tがsに含まれる場合
        if(s.substr(0, n) == t || s.substr(1, n) == t || s.substr(2, n) == t){
            // 0が末尾だったら次のz-1回分足す
            if(t[n - 1] == '0'){
                cout << a + (z - 1LL) << endl;
            }else{
                cout << a - z << endl;
            }
        }else{
            cout << 0 << endl;
        }
    }


    return 0;
}
