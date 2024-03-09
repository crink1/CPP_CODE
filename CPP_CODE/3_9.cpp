//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        int m = intervals.size();
//        int n = intervals[0].size();
//        vector<vector<int>> vv;
//        sort(intervals.begin(), intervals.end());
//        int left = intervals[0][0];
//        int right = intervals[0][1];
//        for (int i = 1; i < m; i++)
//        {
//            if (intervals[i][0] <= right)
//            {
//                right = max(right, intervals[i][1]);
//            }
//            else
//            {
//                vv.push_back({ left,right });
//                left = intervals[i][0];
//                right = intervals[i][1];
//            }
//        }
//        vv.push_back({ left,right });
//        return vv;
//
//
//    }
//};