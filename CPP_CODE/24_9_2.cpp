///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    int sum = 0;
//    void dfs(TreeNode* root, bool is)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        dfs(root->left, true);
//        dfs(root->right, false);
//        if (!root->left && !root->right && is)
//        {
//            sum += root->val;
//        }
//
//    }
//    int sumOfLeftLeaves(TreeNode* root) {
//        dfs(root, false);
//        return sum;
//
//    }
//};