//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& temperatures) {
//        stack<int> s;
//        s.push(0);
//        vector<int> ret(temperatures.size(), 0);
//        for (int i = 1; i < temperatures.size(); i++)
//        {
//            while (!s.empty() && temperatures[i] > temperatures[s.top()])
//            {
//                ret[s.top()] = i - s.top();
//                s.pop();
//            }
//            s.push(i);
//        }
//        return ret;
//    }
//};