//class Solution {
//public:
//    int dfs(TreeNode* root, int path_max) {
//        if (root == nullptr) {
//            return 0;
//        }
//        int res = 0;
//        if (root->val >= path_max) {
//            res++;
//            path_max = root->val;
//        }
//        res += dfs(root->left, path_max) + dfs(root->right, path_max);
//        return res;
//    }
//
//    int goodNodes(TreeNode* root) {
//        return dfs(root, INT_MIN);
//    }
//};