///*
//// Definition for a Node.
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//*/
//
//class Solution {
//public:
//    vector<vector<int>> levelOrder(Node* root) {
//        if (root == nullptr)
//        {
//            return {};
//        }
//        vector<vector<int>> ret;
//        queue<Node*> q;
//        q.push(root);
//        int cnt = 1;
//        vector<int> tmp;
//        while (!q.empty())
//        {
//            tmp.push_back(q.front()->val);
//            Node* next = q.front();
//            q.pop();
//            cnt--;
//
//            for (int i = 0; i < next->children.size(); i++)
//            {
//                q.push(next->children[i]);
//            }
//            if (cnt == 0)
//            {
//                cnt = q.size();
//                ret.push_back(tmp);
//                tmp.clear();
//            }
//
//        }
//        return ret;
//    }
//};