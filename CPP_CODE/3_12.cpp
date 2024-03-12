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
//class FindElements {
//public:
//
//    void buildtree(TreeNode* root)
//    {
//        if (nullptr == root)
//        {
//            return;
//        }
//        set.insert(root->val);
//        if (root->left != nullptr)
//        {
//            root->left->val = 2 * root->val + 1;
//        }
//        if (root->right != nullptr)
//        {
//            root->right->val = 2 * root->val + 2;
//        }
//        buildtree(root->left);
//        buildtree(root->right);
//
//    }
//    FindElements(TreeNode* root)
//    {
//        root->val = 0;
//        set.insert(root->val);
//        _root = root;
//        buildtree(root);
//    }
//
//    // bool findval(int t, TreeNode* root)
//    // {
//    //     if(nullptr == root)
//    //     {
//    //         return false;
//    //     }
//    //     if(root->val == t)
//    //     {
//    //         return true;
//    //     }
//    //     return findval(t, root->left) | findval(t, root->right);
//    // }
//
//    bool find(int target)
//    {
//        if (set.count(target) == 0)
//        {
//            return false;
//        }
//        return true;
//    }
//    TreeNode* _root = nullptr;
//    unordered_set<int> set;
//};
//
///**
// * Your FindElements object will be instantiated and called as such:
// * FindElements* obj = new FindElements(root);
// * bool param_1 = obj->find(target);
// */
//class Solution {
//public:
//
//    unordered_map<long long, int> cache;
//
//    int sdig(long long n)
//    {
//        if (n == 1)
//        {
//            return 0;
//        }
//
//        if (n % 2 == 0)
//        {
//            int t = n / 2;
//            if (cache.count(t) == 0)
//            {
//                cache[t] = sdig(t) + 1;
//            }
//            return cache[t];
//        }
//        else
//        {
//
//            if (cache.count(n + 1) == 0)
//            {
//                cache[n + 1] = sdig(n + 1) + 1;
//            }
//            if (cache.count(n - 1) == 0)
//            {
//                cache[n - 1] = sdig(n - 1) + 1;
//            }
//            return min(cache[n - 1], cache[n + 1]);
//        }
//
//    }
//
//    int integerReplacement(int n) {
//        return sdig(n);
//    }
//};