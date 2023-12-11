//class Solution {
//public:
//    int dfs(int i, int j, vector<vector<int>>& vv)
//    {
//        if (vv[i][j] != 0)
//        {
//            return vv[i][j];
//        }
//        if (i == 0 || j == 0)
//        {
//            return 0;
//        }
//        if (i == 1 && j == 1)
//        {
//            vv[i][j] = 1;
//            return 1;
//        }
//        vv[i][j] = dfs(i - 1, j, vv) + dfs(i, j - 1, vv);
//        return vv[i][j];
//    }
//    int uniquePaths(int m, int n) {
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//        dp[1][1] = 1;
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                if (i == 1 && j == 1)
//                {
//                    continue;
//                }
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//        return dp[m][n];
//
//    }
//};
//#include<iostream>
//
//using namespace std;
//
//double Division(int a, int b)
//{
//	if (b == 0)
//	{
//		throw "³ýÁã";
//	}
//	return (double)a / b;
//}
//
//int fun() throw(int,string,double)
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	double c = 0;
//	try
//	{
//		c = Division(a, b);
//	}
//	catch (const char* str)
//	{
//
//		cout << str << endl;
//		throw;
//	}
//	return c;
//}
//
//
//int main()
//{
//	try
//	{
//		fun();
//	}
//	catch (const char* str)
//	{
//		cout << str << endl;
//	}
//	
//	return 0;
//
//}