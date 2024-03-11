//class Solution {
//public:
//    int findMinArrowShots(vector<vector<int>>& points) {
//        sort(points.begin(), points.end());
//        int ret = 0;
//        int left = points[0][0];
//        int right = points[0][1];
//        for (auto& i : points)
//        {
//            cout << i[0] << " " << i[1] << endl;
//        }
//        for (int i = 1; i < points.size(); i++)
//        {
//            if (points[i][0] > right)
//            {
//                ret++;
//                right = points[i][1];
//
//            }
//            else
//            {
//                right = min(right, points[i][1]);
//
//            }
//        }
//        return ret + 1;
//    }
//};