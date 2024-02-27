//class Solution {
//public:
//    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//        int n = names.size();
//        vector<int> index(n);
//        for (int i = 0; i < n; i++)
//        {
//            index[i] = i;
//        }
//        sort(index.begin(), index.end(), [&](int i, int j) {return heights[i] > heights[j]; });
//        vector<string> ret;
//        for (int i = 0; i < names.size(); i++)
//        {
//            ret.push_back(names[index[i]]);
//        }
//        return ret;
//    }
//};