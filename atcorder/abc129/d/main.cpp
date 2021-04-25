#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int h, w; cin >> h >> w;
  V<string> s(h);
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }

  V<V<int>> vh(h + 1, V<int>(w + 1));
  V<V<int>> vw(h + 1, V<int>(w + 1));
  for (int j = 0; j < w; j++) {
    for (int i = 0; i < h; i++) {
      if(s[i][j] == '#'){
        continue;
      }else {
        int c = 0, st = i;
        while(1){
          if(i == h || s[i][j] == '#') break;
          c++;
          i++;
        }
        for (int l = st; l <= i; l++) {
          vh[l][j] = c;
        }
      }
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if(s[i][j] == '#'){
        continue;
      }else{
        int c = 0, st = j;
        while(1){
          if(j == w || s[i][j] == '#') break;
          c++;
          j++;
        }
        for (int l = st; l <= j; l++) {
          vw[i][l] = c;
        }
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      ans = max(ans, vh[i][j] + vw[i][j] - 1);
    }
  }
  cout << ans << endl;


  return 0;
}
