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
//    vector<int> postorderTraversal(TreeNode* root) {
//        stack<TreeNode*> s;
//        vector<int>v;
//        TreeNode* cur = root;
//        TreeNode* prev = nullptr;
//        while (cur || !s.empty())
//        {
//            while (cur)
//            {
//                s.push(cur);
//                cur = cur->left;
//            }
//            TreeNode* top = s.top();
//            if (top->right == nullptr || top->right == prev)
//            {
//
//                s.pop();
//                v.push_back(top->val);
//                prev = top;
//            }
//            else
//            {
//                cur = top->right;
//            }
//        }
//        return v;
//    }
//};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        stack<TreeNode*> s;
//        vector<int> v;
//        TreeNode* cur = root;
//        while (cur || !s.empty())
//        {
//            while (cur)
//            {
//                s.push(cur);
//                v.push_back(cur->val);
//                cur = cur->left;
//            }
//            TreeNode* top = s.top();
//            s.pop();
//            cur = top->right;
//        }
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
//    vector<int> inorderTraversal(TreeNode* root) {
//        stack<TreeNode*> s;
//        vector<int> v;
//        TreeNode* cur = root;
//        while (cur || !s.empty())
//        {
//            while (cur)
//            {
//                s.push(cur);
//                cur = cur->left;
//            }
//
//            TreeNode* top = s.top();
//            v.push_back(top->val);
//            s.pop();
//            cur = top->right;
//        }
//        return v;
//    }
//};