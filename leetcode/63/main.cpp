#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

const int dx[] = {0, 1};
const int dy[] = {1, 0};

class Solution {
 public:
  int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int h = obstacleGrid.size();
    int w = obstacleGrid[0].size();

    // 配るDP
    V<V<int>> dp(h + 10, V<int>(w + 10));
    if(obstacleGrid[0][0] != 1) dp[0][0] = 1;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if(i + 1 < h && obstacleGrid[i + 1][j] != 1) dp[i + 1][j] += dp[i][j];
        if(j + 1 < w && obstacleGrid[i][j + 1] != 1) dp[i][j + 1] += dp[i][j];
      }
    }

    return dp[h - 1][w - 1];
  }
};
