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
//    int countNodes(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int r = countNodes(root->right);
//        int l = countNodes(root->left);
//        return r + l + 1;
//
//    }
//};