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
//    vector<int> largestValues(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return {};
//        }
//        vector<int> ret;
//        queue<TreeNode*> q;
//        q.push(root);
//        int cnt = 1;
//        while (q.size())
//        {
//            int maxval = INT_MIN;
//            for (int i = 0; i < cnt; i++)
//            {
//                TreeNode* tmp = q.front();
//                q.pop();
//                if (tmp->val > maxval)
//                {
//                    maxval = tmp->val;
//                }
//                if (tmp->left)
//                {
//                    q.push(tmp->left);
//                }
//                if (tmp->right)
//                {
//                    q.push(tmp->right);
//                }
//            }
//            ret.push_back(maxval);
//            cnt = q.size();
//        }
//        return ret;
//
//    }
//};