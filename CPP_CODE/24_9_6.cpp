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
//    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//        TreeNode* root = new  TreeNode(0);
//        if (nums.size() == 1)
//        {
//            root->val = nums[0];
//            return root;
//        }
//
//        int maxval = 0;
//        int maxindex = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] > maxval)
//            {
//                maxval = nums[i];
//                maxindex = i;
//            }
//        }
//
//        root->val = maxval;
//
//        if (maxindex > 0)
//        {
//            vector<int> left(nums.begin(), nums.begin() + maxindex);
//            root->left = constructMaximumBinaryTree(left);
//        }
//
//        if (maxindex < (nums.size() - 1))
//        {
//            vector<int> right(nums.begin() + maxindex + 1, nums.end());
//            root->right = constructMaximumBinaryTree(right);
//        }
//        return root;
//    }
//};