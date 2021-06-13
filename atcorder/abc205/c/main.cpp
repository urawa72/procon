#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  ll a, b, c; cin >> a >> b >> c;

  if(c & 1){
    if(a < b){
      cout << "<" << endl;
    }else if(a == b){
      cout << "=" << endl;
    }else{
      cout << ">" << endl;
    }
  }else{
    if(abs(a) < abs(b)){
      cout << "<" << endl;
    }else if(abs(a) == abs(b)){
      cout << "=" << endl;
    }else if(abs(b) < abs(a)){
      cout << ">" << endl;
    }
  }


  return 0;
}
