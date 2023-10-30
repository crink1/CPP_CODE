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
//
//    TreeNode* pre(vector<int>& preorder, vector<int>& inorder, int& pi, int begin, int end)
//    {
//        if (begin > end)
//        {
//            return nullptr;
//        }
//        int rooti = begin;
//        while (rooti <= end)
//        {
//            if (inorder[rooti] == preorder[pi])
//            {
//                break;
//            }
//            rooti++;
//        }
//        TreeNode* root = new TreeNode(preorder[pi++]);
//
//        root->left = pre(preorder, inorder, pi, begin, rooti - 1);
//
//        root->right = pre(preorder, inorder, pi, rooti + 1, end);
//
//        return root;
//    }
//
//
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        int pi = 0;
//        TreeNode* root = pre(preorder, inorder, pi, 0, inorder.size() - 1);
//        return root;
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
//
//    TreeNode* pre(vector<int>& inorder, vector<int>& postorder, int& pi, int begin, int end)
//    {
//        if (begin > end)
//        {
//            return nullptr;
//        }
//        int rooti = begin;
//        while (rooti <= end)
//        {
//            if (postorder[pi] == inorder[rooti])
//            {
//                break;
//            }
//            rooti++;
//        }
//        TreeNode* root = new TreeNode(postorder[pi--]);
//        root->right = pre(inorder, postorder, pi, rooti + 1, end);
//        root->left = pre(inorder, postorder, pi, begin, rooti - 1);
//
//        return root;
//    }
//
//
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        int pi = postorder.size() - 1;
//
//        TreeNode* root = pre(inorder, postorder, pi, 0, inorder.size() - 1);
//
//        return root;
//    }
//};