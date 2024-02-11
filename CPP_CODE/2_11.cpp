//class Solution {
//public:
//
//
//    string largestNumber(vector<int>& nums) {
//        vector<string> v;
//        for (auto& c : nums)
//        {
//            v.push_back(to_string(c));
//        }
//
//        sort(v.begin(), v.end(), [](const string& x, const string& y)
//            {
//                return x + y > y + x;
//            });
//
//        string ret;
//        for (auto& c : v)
//        {
//            ret += c;
//        }
//        if (ret[0] == '0')
//        {
//            return "0";
//        }
//        else
//        {
//            return ret;
//        }
//
//    }
//};