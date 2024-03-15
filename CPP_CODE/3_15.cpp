//class Solution {
//public:
//    int maxEnvelopes(vector<vector<int>>& envelopes) {
//        sort(envelopes.begin(), envelopes.end(), [](vector<int>& x, vector<int>& y) {
//            if (x[0] == y[0])
//            {
//                return x[1] > y[1];
//            }
//            else
//            {
//                return x[0] < y[0];
//            }
//            });
//
//
//        vector<int> ret;
//        ret.push_back(envelopes[0][1]);
//        for (int i = 1; i < envelopes.size(); i++)
//        {
//            int b = envelopes[i][1];
//            if (b > ret.back())
//            {
//                ret.push_back(b);
//            }
//            else
//            {
//                int left = 0;
//                int right = ret.size() - 1;
//                while (left < right)
//                {
//                    int mid = (left + right) / 2;
//                    if (ret[mid] >= b)
//                    {
//                        right = mid;
//
//                    }
//                    else
//                    {
//                        left = mid + 1;
//                    }
//                }
//                ret[left] = b;
//
//            }
//
//        }
//        return ret.size();
//
//
//    }
//};
//
//class Solution {
//public:
//    int pileBox(vector<vector<int>>& box) {
//        sort(box.begin(), box.end());
//        int n = box.size();
//
//        vector<int> dp(n, 0);
//
//
//        for (int i = 0; i < n; i++)
//        {
//            dp[i] = box[i][2];
//        }
//        int ret = dp[0];
//
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (box[i][0] > box[j][0] && box[i][1] > box[j][1] && box[i][2] > box[j][2])
//                {
//                    dp[i] = max(dp[i], dp[j] + box[i][2]);
//                }
//            }
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//
//    }
//};