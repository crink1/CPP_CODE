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
//
//
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        if (postorder.size() == 0 || inorder.size() == 0)
//        {
//            return nullptr;
//        }
//
//        int val = postorder[postorder.size() - 1];
//        TreeNode* root = new  TreeNode(val);
//
//        if (postorder.size() == 1)
//        {
//            return root;
//        }
//
//        int delimiterIndex;
//        for (delimiterIndex = 0; delimiterIndex < inorder.size(); delimiterIndex++) {
//            if (inorder[delimiterIndex] == val) break;
//        }
//
//        vector<int> leftinorder(inorder.begin(), inorder.begin() + delimiterIndex);
//        vector<int> rightinorder(inorder.begin() + 1 + delimiterIndex, inorder.end());
//
//        postorder.resize(postorder.size() - 1);
//
//        vector<int> leftpostorder(postorder.begin(), postorder.begin() + leftinorder.size());
//        vector<int> rightpostorder(postorder.begin() + leftinorder.size(), postorder.end());
//
//        root->left = buildTree(leftinorder, leftpostorder);
//        root->right = buildTree(rightinorder, rightpostorder);
//        return root;
//    }
//
//
//
//};