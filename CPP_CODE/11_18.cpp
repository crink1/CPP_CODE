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
//
//    int sum(TreeNode* root, int x)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//
//        x = x * 10 + root->val;
//
//        if (root->right == nullptr && root->left == nullptr)
//        {
//            return x;
//        }
//
//        return sum(root->left, x) + sum(root->right, x);
//    }
//
//    int sumNumbers(TreeNode* root) {
//        return sum(root, 0);
//
//    }
//};



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
//    bool evaluateTree(TreeNode* root) {
//
//        if (root->val == 1)
//        {
//            return true;
//        }
//        if (root->val == 0)
//        {
//            return false;
//        }
//        if (root->val == 2)
//        {
//            return evaluateTree(root->left) || evaluateTree(root->right);
//        }
//        if (root->val == 3)
//        {
//            return evaluateTree(root->left) && evaluateTree(root->right);
//        }
//        return true;
//    }
//};