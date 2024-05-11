//#include <iostream>
//#include <queue>
//#include <vector>
//#include <unordered_map>
//#include <functional>
//using namespace std;
//
//class Solution {
//public:
//    class cmp
//    {
//    public:
//        bool operator()(const pair<string, int>& x, const pair<string, int>& y)
//        {
//            if (x.second == y.second)
//            {
//                return x.first < y.first;
//            }
//            else
//            {
//                return x.second > y.second;
//            }
//        }
//    };
//    vector<string> topKFrequent(vector<string>& words, int k) {
//        unordered_map<string, int> hash;
//
//        for (auto& i : words)
//        {
//            hash[i]++;
//        }
//        priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> heap;
//
//        for (auto& i : hash)
//        {
//            heap.push(i);
//            if (heap.size() > k)
//            {
//                heap.pop();
//            }
//        }
//        vector<string> ret(k);
//        for (int i = k - 1; i >= 0; i--)
//        {
//            ret[i] = heap.top().first;
//            heap.pop();
//        }
//        return ret;
//
//    }
//};
//
//
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
//
//int main()
//{
//    int n = 3;
//    vector<int> v = { 4,5,8,2,9,32,12,43 };
//    KthLargest k(n, v);
//    //cout << k.add(3) << endl;
//    function<bool(pair<int, int>&, pair<int, int>&)> f = [](const pair<int, int>& x, const pair<int, int>& y)->bool {return x.second > y.second; };
//    priority_queue<pair<int, int>, vector<pair<int, int>>, f> heap;
//    pair<int, int> p1(3, 2);
//    pair<int, int> p2(5, 1);
//    bool ret = f(p1, p2);
//    cout << ret << endl;
//    return 0;
//}