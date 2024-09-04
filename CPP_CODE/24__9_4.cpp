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
//    bool ret = false;
//    void dfs(TreeNode* root, int targetSum)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        sum += root->val;
//        if (!root->left && !root->right && targetSum == sum)
//        {
//            ret = true;
//            return;
//        }
//        dfs(root->left, targetSum);
//        dfs(root->right, targetSum);
//        sum -= root->val;
//    }
//
//    bool hasPathSum(TreeNode* root, int targetSum) {
//        dfs(root, targetSum);
//        return ret;
//    }
//};