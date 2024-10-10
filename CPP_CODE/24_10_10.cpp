///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
// * right(right) {}
// * };
// */
//class Solution {
//public:
//
//    vector<int> dfs(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return vector<int>{0, 0};
//        }
//        vector<int>&& l = dfs(root->left);
//        vector<int>&& r = dfs(root->right);
//
//        int r2 = root->val + l[0] + r[0];
//        int r1 = max(l[0], l[1]) + max(r[0], r[1]);
//        return { r1, r2 };
//    }
//
//    int rob(TreeNode* root)
//    {
//        vector<int>&& ret = dfs(root);
//        return max(ret[0], ret[1]);
//    }
//};