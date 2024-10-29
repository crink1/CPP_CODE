//#include<iostream>
//using namespace std;
//
//
//
//
//int main()
//{
//	int x = 10, y = 20;
//	cout << (x, y);
//	return 0;
//}
//
//class Solution {
//public:
//    int largestRectangleArea(vector<int>& heights) {
//        stack<int> st;
//        st.push(0);
//        heights.insert(heights.begin(), 0);
//        heights.push_back(0);
//
//        int ret = 0;
//
//        for (int i = 1; i < heights.size(); i++)
//        {
//            while (heights[i] < heights[st.top()])
//            {
//                int m = st.top();
//                st.pop();
//                int h = heights[m];
//                int w = i - st.top() - 1;
//                ret = max(ret, h * w);
//            }
//            st.push(i);
//        }
//        return ret;
//    }
//};