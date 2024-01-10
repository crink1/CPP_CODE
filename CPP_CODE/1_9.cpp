//class Solution {
//public:
//    int longestArithSeqLength(vector<int>& nums) {
//        int n = nums.size();
//        vector<vector<int>> dp(n, vector<int>(n, 2));
//        unordered_map<int, int> hash;
//        int ret = 2;
//
//        for (int i = 0; i < n; i++)
//        {
//
//            for (int j = i + 1; j < n; j++)
//            {
//                int temp = 2 * nums[i] - nums[j];
//
//                if (hash.count(temp))
//                {
//                    if (hash[temp] < i)
//                    {
//                        dp[i][j] = dp[hash[temp]][i] + 1;
//                        ret = max(ret, dp[i][j]);
//                    }
//
//                }
//            }
//            hash[nums[i]] = i;
//        }
//        return ret;
//    }
//};

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    cin >> a >> b;
//    cout << a + b << endl;
//    return 0;
//}