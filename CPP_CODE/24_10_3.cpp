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
//    int ret;
//    int dfs(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 2;
//        }
//        int l = dfs(root->left);
//        int r = dfs(root->right);
//
//        if (l == 2 && r == 2)
//        {
//            return 0;
//        }
//
//        if (l == 0 || r == 0)
//        {
//            ret++;
//            return 1;
//        }
//        if (l == 1 || r == 1)
//        {
//            return 2;
//        }
//        return -1;
//
//    }
//
//    int minCameraCover(TreeNode* root) {
//        ret = 0;
//        if (dfs(root) == 0)
//        {
//            ret++;
//        }
//        return ret;
//    }
//};