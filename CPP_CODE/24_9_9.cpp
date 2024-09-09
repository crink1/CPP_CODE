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
//    int cnt = 0;
//    int maxcnt = 0;
//    vector<int> ret;
//    TreeNode* prev = nullptr;
//
//    void find(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        find(root->left);
//
//        if (prev == nullptr)
//        {
//            cnt = 1;
//        }
//        else if (prev->val == root->val)
//        {
//            cnt++;
//        }
//        else if (prev->val != root->val)
//        {
//            cnt = 1;
//        }
//
//        prev = root;
//
//        if (cnt == maxcnt)
//        {
//            ret.push_back(root->val);
//        }
//        else if (cnt > maxcnt)
//        {
//            ret.clear();
//            ret.push_back(root->val);
//            maxcnt = cnt;
//        }
//        find(root->right);
//
//
//
//    }
//    vector<int> findMode(TreeNode* root) {
//        ret.clear();
//        find(root);
//
//        return ret;
//    }
//};