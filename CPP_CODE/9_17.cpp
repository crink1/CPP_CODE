//class Solution {
//public:
//    int evalRPN(vector<string>& tokens)
//    {
//        stack<int> st;
//        for (auto& str : tokens)
//        {
//            if (str == "+"
//                || str == "-"
//                || str == "*"
//                || str == "/"
//                )
//            {
//                int right = st.top();
//                st.pop();
//                int left = st.top();
//                st.pop();
//                switch (str[0])
//                {
//                case '+':
//                    st.push(right + left);
//                    break;
//                case '-':
//                    st.push(left - right);
//                    break;
//                case '*':
//                    st.push(right * left);
//                    break;
//                case '/':
//                    st.push(left / right);
//                    break;
//                }
//
//            }
//            else
//            {
//                st.push(stoi(str));
//            }
//        }
//        return st.top();
//    }
//};



//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        int levelsize = 0;
//        queue<TreeNode*> q;
//        vector<vector<int>> vv;
//        if (root)
//        {
//            levelsize = 1;
//            q.push(root);
//        }
//        while (!q.empty())
//        {
//            vector<int> v;
//            while (levelsize)
//            {
//                TreeNode* cur = q.front();
//                q.pop();
//                if (cur->left)
//                {
//                    q.push(cur->left);
//                }
//                if (cur->right)
//                {
//                    q.push(cur->right);
//                }
//                v.push_back(cur->val);
//                levelsize--;
//            }
//            vv.push_back(v);
//            levelsize = q.size();
//        }
//        return vv;
//    }
//};





//class Solution {
//public:
//    int robRange(vector<int>& nums, int start, int end) {
//        int first = nums[start], second = max(nums[start], nums[start + 1]);
//        for (int i = start + 2; i <= end; i++) {
//            int temp = second;
//            second = max(first + nums[i], second);
//            first = temp;
//        }
//        return second;
//    }
//
//    int rob(vector<int>& nums) {
//        int length = nums.size();
//        if (length == 1) {
//            return nums[0];
//        }
//        else if (length == 2) {
//            return max(nums[0], nums[1]);
//        }
//        return max(robRange(nums, 0, length - 2), robRange(nums, 1, length - 1));
//    }
//};