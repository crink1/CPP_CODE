
//class Solution {
//public:
//    bool isInterleave(string s1, string s2, string s3)
//    {
//        int m = s1.size();
//        int n = s2.size();
//        if (m + n != s3.size())
//        {
//            return false;
//        }
//        s1 = " " + s1;
//        s2 = " " + s2;
//        s3 = " " + s3;
//        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1));
//        dp[0][0] = true;
//        for (int i = 1; i <= m; i++)
//        {
//            if (s1[i] == s3[i])
//            {
//                dp[i][0] = true;
//            }
//            else
//            {
//                break;
//            }
//        }
//        for (int j = 1; j <= n; j++)
//        {
//            if (s2[j] == s3[j])
//            {
//                dp[0][j] = true;
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                dp[i][j] = (s3[i + j] == s1[i] && dp[i - 1][j])
//                    || (s3[i + j] == s2[j] && dp[i][j - 1]);
//            }
//        }
//        return dp[m][n];
//
//    }
//};
//#include<iostream>
//#include<functional>
//
//
//using namespace std;
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	function<int(int, int)> vd = add;
//
//	int x = 2;
//	int y = 3;
//
//	cout << vd(x, y) << endl;
//
//	return 0;
//}