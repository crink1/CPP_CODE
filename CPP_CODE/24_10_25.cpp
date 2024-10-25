//class Solution {
//public:
//    int trap(vector<int>& height) {
//        stack<int> st;
//        st.push(0);
//        int ret = 0;
//        for (int i = 1; i < height.size(); i++)
//        {
//            while (!st.empty() && height[i] > height[st.top()])
//            {
//                int mid = st.top();
//                st.pop();
//                if (!st.empty())
//                {
//                    int h = min(height[i], height[st.top()]) - height[mid];
//                    int w = i - st.top() - 1;
//                    ret += h * w;
//                }
//            }
//            st.push(i);
//        }
//        return ret;
//    }
//};