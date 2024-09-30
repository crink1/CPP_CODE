//class Solution {
//public:
//    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//
//        sort(intervals.begin(), intervals.end());
//
//        int left = intervals[0][0];
//        int right = intervals[0][1];
//        int ret = 0;
//        for (int i = 1; i < intervals.size(); i++)
//        {
//            if (intervals[i][0] < right)
//            {
//                ret++;
//                right = min(right, intervals[i][1]);
//            }
//            else
//            {
//
//                right = intervals[i][1];
//            }
//
//        }
//        return ret;
//    }
//};