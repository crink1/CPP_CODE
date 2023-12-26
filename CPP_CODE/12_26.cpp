//#include<iostream>
//#include<functional>
//using namespace std;
//
//int sum(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	function<int(int)> f1 = bind(sum, 3, placeholders::_1);
//	int ret = f1(6);
//	cout << ret << endl;
//	return 0;
//}

//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(3, -0x3f3f3f3f));
//        vector<vector<int>> g(n, vector<int>(3, -0x3f3f3f3f));
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                g[i][j] = g[i - 1][j];
//                if (j - 1 >= 0)
//                {
//                    g[i][j] = max(g[i][j], f[i - 1][j - 1] + prices[i]);
//                }
//            }
//        }
//        return max(g[n - 1][0], max(g[n - 1][1], g[n - 1][2]));
//    }
//};

//class Solution {
//public:
//    int maxProfit(int k, vector<int>& prices) {
//
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(k + 1, -0x3f3f3f3f));
//        vector<vector<int>> g(n, vector<int>(k + 1, -0x3f3f3f3f));
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j <= k; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                g[i][j] = g[i - 1][j];
//                if (j - 1 >= 0)
//                {
//                    g[i][j] = max(g[i][j], f[i - 1][j - 1] + prices[i]);
//                }
//            }
//        }
//        int ret = 0;
//        for (int j = 0; j <= k; j++)
//        {
//            ret = max(ret, g[n - 1][j]);
//        }
//        return ret;
//    }
//
//
//};