//class Solution {
//public:
//    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//        stack<int> st;
//        int pi = 0;
//        for (auto& i : pushed)
//        {
//            st.push(i);
//            while (!st.empty() && popped[pi] == st.top())
//            {
//                st.pop();
//                pi++;
//            }
//        }
//        if (st.empty())
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//};