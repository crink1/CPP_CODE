//class Solution {
//public:
//    int trap(vector<int>& height) {
//        if (height.size() <= 2)
//        {
//            return 0;
//        }
//        vector<int> l(height.size(), 0);
//        l[0] = height[0];
//        vector<int> r(height.size(), 0);
//        r[r.size() - 1] = height[height.size() - 1];
//        for (int i = 1; i < height.size(); i++)
//        {
//            l[i] = max(l[i - 1], height[i]);
//        }
//        for (int i = height.size() - 2; i >= 0; i--)
//        {
//            r[i] = max(r[i + 1], height[i]);
//        }
//
//        int ret = 0;
//        for (int i = 0; i < height.size(); i++)
//        {
//            int t = min(l[i], r[i]) - height[i];
//            if (t > 0)
//            {
//                ret += t;
//            }
//        }
//        return ret;
//
//    }
//};