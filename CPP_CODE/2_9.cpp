///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//class Solution {
//public:
//    bool search(TreeNode* root, TreeNode* x, stack<TreeNode*>& s)
//    {
//        if (root == nullptr)
//        {
//            return false;
//        }
//        s.push(root);
//        if (root == x)
//        {
//            return true;
//        }
//        if (search(root->left, x, s))
//        {
//            return true;
//        }
//        if (search(root->right, x, s))
//        {
//            return true;
//        }
//        s.pop();
//        return false;
//
//    }
//
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        stack<TreeNode*> s1;
//        stack<TreeNode*> s2;
//        search(root, p, s1);
//        search(root, q, s2);
//        cout << s1.size() << " " << s2.size();
//        if (s1.size() > s2.size())
//        {
//            while (s1.size() != s2.size())
//            {
//                s1.pop();
//            }
//        }
//        else
//        {
//            while (s1.size() != s2.size())
//            {
//                s2.pop();
//            }
//        }
//        while (s1.top() != s2.top())
//        {
//            s1.pop();
//            s2.pop();
//        }
//        return s1.top();
//    }
//};