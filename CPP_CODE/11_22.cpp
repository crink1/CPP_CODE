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
//    void route(vector<string>& v, TreeNode* root, string s)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        s += to_string(root->val);
//        if (root->left == nullptr && root->right == nullptr)
//        {
//
//            v.push_back(s);
//        }
//        s += "->";
//
//        route(v, root->left, s);
//        route(v, root->right, s);
//
//    }
//
//    vector<string> binaryTreePaths(TreeNode* root) {
//        vector<string> v;
//        string s;
//        route(v, root, s);
//        return v;
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
//    int count = 0;
//    int ret = 0;
//    int kthSmallest(TreeNode* root, int k) {
//        if (root == nullptr || count == k)
//        {
//            return  0;
//        }
//        kthSmallest(root->left, k);
//        count++;
//        if (count == k)
//        {
//            ret = root->val;
//            return ret;
//        }
//
//        kthSmallest(root->right, k);
//
//        return ret;
//
//    }
//};