//class Solution {
//public:
//    int longestSubsequence(vector<int>& arr, int difference) {
//        // 创建⼀个哈希表
//        unordered_map<int, int> hash; // {arr[i], dp[i]}
//        hash[arr[0]] = 1; // 初始化
//        int ret = 1;
//        for (int i = 1; i < arr.size(); i++)
//        {
//            hash[arr[i]] = hash[arr[i] - difference] + 1;
//            ret = max(ret, hash[arr[i]]);
//        }
//        return ret;
//    }
//};