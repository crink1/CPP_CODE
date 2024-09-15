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
//    TreeNode* prev = nullptr;
//    TreeNode* convertBST(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return nullptr;
//        }
//        convertBST(root->right);
//
//        if (prev != nullptr)
//        {
//            root->val += prev->val;
//        }
//
//        prev = root;
//
//        convertBST(root->left);
//        return root;
//    }
//};