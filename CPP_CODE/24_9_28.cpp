//class Solution {
//public:
//    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
//
//        sort(people.begin(), people.end(), [](vector<int>& x, vector<int>& y) {
//            if (x[0] == y[0])
//            {
//                return x[1] < y[1];
//            }
//            return x[0] > y[0];
//            });
//
//        vector<vector<int>> ret;
//        for (int i = 0; i < people.size(); i++)
//        {
//            int pos = people[i][1];
//            ret.insert(ret.begin() + pos, people[i]);
//        }
//        return ret;
//    }
//};