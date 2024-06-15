//class Solution {
//public:
//    vector<int> spiralArray(vector<vector<int>>& array) {
//        if (array.size() == 0 || array[0].size() == 0)
//        {
//            return {};
//        }
//
//        vector<int> ret;
//        int rbegin = 0;
//        int rend = array.size() - 1;
//        int cbegin = 0;
//        int cend = array[0].size() - 1;
//
//        while (true)
//        {
//            for (int i = cbegin; i <= cend; i++)
//            {
//                ret.push_back(array[rbegin][i]);
//            }
//            if (++rbegin > rend)
//            {
//                break;
//            }
//
//
//            for (int i = rbegin; i <= rend; i++)
//            {
//                ret.push_back(array[i][cend]);
//            }
//            if (cbegin > --cend)
//            {
//                break;
//            }
//
//
//            for (int i = cend; i >= cbegin; i--)
//            {
//                ret.push_back(array[rend][i]);
//            }
//            if (rbegin > --rend)
//            {
//                break;
//            }
//
//
//            for (int i = rend; i >= rbegin; i--)
//            {
//                ret.push_back(array[i][cbegin]);
//            }
//            if (++cbegin > cend)
//            {
//                break;
//            }
//        }
//        return ret;
//    }
//};