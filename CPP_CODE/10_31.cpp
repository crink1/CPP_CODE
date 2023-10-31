//
//
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
///*
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};*/
//class Solution {
//public:
//	void InOrder(TreeNode* root, TreeNode*& prev)
//	{
//		if (root == nullptr)
//		{
//			return;
//		}
//
//		InOrder(root->left, prev);
//		if (prev != nullptr)
//		{
//			prev->right = root;
//		}
//		root->left = prev;
//		prev = root;
//		InOrder(root->right, prev);
//
//	}
//	TreeNode* Convert(TreeNode* pRootOfTree)
//	{
//		TreeNode* p = nullptr;
//		InOrder(pRootOfTree, p);
//		TreeNode* cur = pRootOfTree;
//		while (cur && cur->left)
//		{
//			cur = cur->left;
//		}
//		return cur;
//
//	}
//};
//#include<iostream>
//using namespace std;
//class B { public: int b; };
//
//                class C1 : public B { public: int c1; };
//
//                class C2 : public B { public: int c2; };
//
//                class D : public C1, public C2 { public: int d; };
//                int main()
//                {
//                    D d;
//                    cout << sizeof(d) << endl;
//                    //d.b = 2;
//                    return 0;
//                }