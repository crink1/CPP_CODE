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
//    int widthOfBinaryTree(TreeNode* root) {
//        vector<pair<TreeNode*, unsigned int>> q;
//        q.push_back({ root, 1 });
//        unsigned int ret = 0;
//        while (q.size())
//        {
//            auto& [x1, y1] = q[0];
//            auto& [x2, y2] = q.back();
//            ret = max(ret, y2 - y1 + 1);
//
//            vector<pair<TreeNode*, unsigned int>> t;
//
//            for (auto& [x, y] : q)
//            {
//                if (x->left)
//                {
//                    t.push_back({ x->left, y * 2 });
//                }
//                if (x->right)
//                {
//                    t.push_back({ x->right, y * 2 + 1 });
//                }
//
//            }
//            q = t;
//
//        }
//        return ret;
//    }
//};