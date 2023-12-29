//class Solution {
//public:
//    int maxTurbulenceSize(vector<int>& arr) {
//        int n = arr.size();
//        vector<int> f(n);
//        auto g = f;
//        int ret = 1;
//        for (int i = 1; i < n; i++)
//        {
//            f[i] = arr[i] < arr[i - 1] ? g[i - 1] + 1 : 1;
//            g[i] = arr[i] > arr[i - 1] ? f[i - 1] + 1 : 1;
//            ret = max(ret, max(f[i], g[i]));
//        }
//        return ret;
//    }
//};

//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n);
//        int ret = 0;
//        for (int i = 2; i < n; i++)
//        {
//            dp[i] = nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2] ? dp[i - 1] + 1 : 0;
//            ret = ret + dp[i];
//        }
//        return ret;
//    }
//};

//class Solution {
//public:
//    bool wordBreak(string s, vector<string>& wordDict) {
//        unordered_set<string> hash;
//        for (auto& e : wordDict)
//        {
//            hash.insert(e);
//        }
//        int n = s.size();
//        vector<bool> dp(n + 1);
//        dp[0] = true;
//        s = " " + s;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = i; j >= 1; j--)
//            {
//                if (dp[j - 1] == true && hash.count(s.substr(j, i - j + 1)))
//                {
//                    dp[i] = true;
//                    break;
//                }
//
//            }
//        }
//        return dp[n];
//    }
//};