///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
//
//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return 0;
//    }
//    int lefthight = maxDepth(root->left);
//    int righthight = maxDepth(root->right);
//    return lefthight > righthight ? lefthight + 1 : righthight + 1;
//
//}