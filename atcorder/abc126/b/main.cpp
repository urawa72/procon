#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;
    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(2, 2));

    if(13 <= a || a == 0){
        if(1 <= b && b <= 12){
            cout << "YYMM" << endl;
        }else{
            cout << "NA" << endl;
        }
    }else if(1 <= a && a <= 12){
        if(1 <= b && b <= 12){
            cout << "AMBIGUOUS" << endl;
        }else if(13 <= b || b == 0){
            cout << "MMYY" << endl;
        }else{
            cout << "NA" << endl;
        }
    }else{
        cout << "NA" << endl;
    }

    return 0;
}
