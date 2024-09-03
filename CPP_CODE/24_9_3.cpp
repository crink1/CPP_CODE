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
//    int findBottomLeftValue(TreeNode* root) {
//
//        queue<TreeNode*> q;
//        q.push(root);
//        int ret = 0;
//        while (!q.empty())
//        {
//            int n = q.size();
//            for (int i = 0; i < n; i++)
//            {
//                TreeNode* t = q.front();
//                q.pop();
//                if (i == 0)
//                {
//                    ret = t->val;
//                }
//                if (t->left)
//                {
//                    q.push(t->left);
//                }
//                if (t->right)
//                {
//                    q.push(t->right);
//                }
//            }
//        }
//        return ret;
//
//    }
//};