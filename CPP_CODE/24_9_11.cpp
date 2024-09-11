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
//    TreeNode* prev;
//    void insertTreeNode(TreeNode* root, int val)
//    {
//        if (root == nullptr)
//        {
//            if (val > prev->val)
//            {
//                prev->right = new TreeNode(val);
//            }
//            else
//            {
//                prev->left = new TreeNode(val);
//            }
//            return;
//        }
//
//        prev = root;
//        if (val > prev->val)
//        {
//            insertTreeNode(root->right, val);
//        }
//        else
//        {
//            insertTreeNode(root->left, val);
//        }
//
//
//    }
//
//    TreeNode* insertIntoBST(TreeNode* root, int val)
//    {
//        prev = new TreeNode(0);
//        if (root == nullptr)
//        {
//            return new TreeNode(val);
//        }
//        insertTreeNode(root, val);
//        return root;
//    }
//};