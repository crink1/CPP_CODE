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
//    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return {};
//        }
//        vector<vector<int>> ret;
//        queue<TreeNode*> q;
//        q.push(root);
//        int cnt = 1;
//        vector<int> tmp;
//        bool flag = false;
//        while (!q.empty())
//        {
//            tmp.push_back(q.front()->val);
//            TreeNode* next = q.front();
//            q.pop();
//            cnt--;
//            if (next->left)
//            {
//                q.push(next->left);
//            }
//            if (next->right)
//            {
//                q.push(next->right);
//            }
//            if (cnt == 0)
//            {
//                cnt = q.size();
//                if (flag)
//                {
//                    reverse(tmp.begin(), tmp.end());
//                    flag = false;
//                }
//                else
//                {
//                    flag = true;
//                }
//                ret.push_back(tmp);
//                tmp.clear();
//            }
//
//        }
//        return ret;
//    }
//};