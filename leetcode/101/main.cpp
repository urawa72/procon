#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
 public:
  void fLeft(vector<int> &v, TreeNode *n) {
    if (n == nullptr) {
      v.push_back(-1000);
      return;
    }
    fLeft(v, n->left);
    fLeft(v, n->right);
    v.push_back(n->val);
  }

  void fRight(vector<int> &v, TreeNode *n) {
    if (n == nullptr) {
      v.push_back(-1000);
      return;
    }
    fRight(v, n->right);
    fRight(v, n->left);
    v.push_back(n->val);
  }

  bool isSymmetric(TreeNode *root) {
    vector<int> L, R;

    fLeft(L, root->left);
    fRight(R, root->right);

    for (int l : L) {
      cout << l << ",";
    }
    cout << endl;
    for (int r : R) {
      cout << r << ",";
    }

    if (L == R) {
      return true;
    } else {
      return false;
    }
  }
};
