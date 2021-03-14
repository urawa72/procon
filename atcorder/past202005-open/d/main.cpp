#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    V<string> v(5);
    v[0] = ".###..#..###.###.#.#.###.###.###.###.###.";
    v[1] = ".#.#.##....#...#.#.#.#...#.....#.#.#.#.#.";
    v[2] = ".#.#..#..###.###.###.###.###...#.###.###.";
    v[3] = ".#.#..#..#.....#...#...#.#.#...#.#.#...#.";
    v[4] = ".###.###.###.###...#.###.###...#.###.###.";

    int n; cin >> n;
    V<string> s(5);
    for(int i = 0; i < 5; i++) cin >> s[i];

    string ans;
    for(int i = 0; i < n * 4 + 1; i+=4){
        for(int j = 0; j < 40; j+=4){
            if(
                v[0].substr(j, 4) == s[0].substr(i, 4) &&
                v[1].substr(j, 4) == s[1].substr(i, 4) &&
                v[2].substr(j, 4) == s[2].substr(i, 4) &&
                v[3].substr(j, 4) == s[3].substr(i, 4) &&
                v[4].substr(j, 4) == s[4].substr(i, 4)
            ){
                int c = j / 4;
                ans += to_string(c);
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
