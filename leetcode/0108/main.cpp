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
    TreeNode *rec(int s, int e, vector<int> &nums) {
        if (e < s) {
            return nullptr;
        } else {
            int m = s + (e - s) / 2;
            TreeNode *tmp = new TreeNode(nums[m]);
            if (s == e) {
                return tmp;
            }
            tmp->left = rec(s, m - 1, nums);
            tmp->right = rec(m + 1, e, nums);
            return tmp;
        }
    }

    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return rec(0, nums.size() - 1, nums);
    }
};
