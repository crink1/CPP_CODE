//class Solution {
//public:
//    long long pickGifts(vector<int>& gifts, int k) {
//        priority_queue<int> q;
//        for (auto i : gifts)
//        {
//            q.push(i);
//        }
//        while (k)
//        {
//            long long tmp = q.top();
//            q.pop();
//            q.push(sqrt(tmp));
//            k--;
//        }
//        long long ret = 0;
//        while (!q.empty())
//        {
//            ret += q.top();
//            q.pop();
//        }
//        return ret;
//    }
//};