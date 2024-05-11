//class KthLargest {
//public:
//    int _k = 0;
//    priority_queue<int, vector<int>, greater<int>> heap;
//    KthLargest(int k, vector<int>& nums) {
//        _k = k;
//        for (auto& i : nums)
//        {
//            heap.push(i);
//            if (heap.size() > k)
//            {
//                heap.pop();
//            }
//        }
//
//    }
//
//    int add(int val) {
//        heap.push(val);
//        if (heap.size() > _k)
//        {
//            heap.pop();
//        }
//        return heap.top();
//    }
//};
//
///**
// * Your KthLargest object will be instantiated and called as such:
// * KthLargest* obj = new KthLargest(k, nums);
// * int param_1 = obj->add(val);
// */