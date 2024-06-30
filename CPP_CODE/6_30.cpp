//class Solution {
//public:
//    struct f
//    {
//        bool operator()(const pair<int, int>& x, const pair<int, int>& y)
//        {
//            return x.second > y.second;
//        }
//    };
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        for (auto& i : nums)
//        {
//            hash[i]++;
//        }
//        priority_queue<pair<int, int>, vector<pair<int, int>>, f> heap;
//        for (auto& i : hash)
//        {
//            heap.push(i);
//            if (heap.size() > k)
//            {
//                heap.pop();
//            }
//        }
//        vector<int> ret(k);
//        for (int i = k - 1; i >= 0; i--)
//        {
//            ret[i] = heap.top().first;
//            heap.pop();
//        }
//        return ret;
//    }
//};