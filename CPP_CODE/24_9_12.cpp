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
//    TreeNode* deleteNode(TreeNode* root, int key) {
//        if (root == nullptr)
//        {
//            return root;
//        }
//
//        if (root->val == key)
//        {
//            if (root->left == nullptr && root->right == nullptr)
//            {
//                delete root;
//                return nullptr;
//            }
//            else if (root->left == nullptr)
//            {
//                TreeNode* node = root->right;
//                delete root;
//                return node;
//            }
//            else if (root->right == nullptr)
//            {
//                TreeNode* node = root->left;
//                delete root;
//                return node;
//            }
//            else
//            {
//                TreeNode* node = root->right;
//                while (node->left != nullptr)
//                {
//                    node = node->left;
//                }
//                node->left = root->left;
//                node = root->right;
//                delete root;
//                return node;
//            }
//        }
//
//        if (root->val > key)
//        {
//            root->left = deleteNode(root->left, key);
//        }
//        if (root->val < key)
//        {
//            root->right = deleteNode(root->right, key);
//        }
//        return root;
//    }
//};