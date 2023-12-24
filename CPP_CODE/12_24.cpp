//#include<iostream>
//
//using namespace std;
//class Solution {
//public:
//    int minCost(vector<vector<int>>& costs) {
//        int n = costs.size();
//        vector<vector<int>> dp(n + 1, vector<int>(3));
//        for (int i = 1; i <= n; i++)
//        {
//            dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + costs[i - 1][0];
//            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + costs[i - 1][1];
//            dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + costs[i - 1][2];
//        }
//        return min(dp[n][0], min(dp[n][1], dp[n][2]));
//
//    }
//};
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	const int c = 0;
//
//	int& a1 = a;
//	int*& p1 = p;
//	const int& c1 = c;
//	return 0;
//}
//double fun(double a)
//{
//	return a;
//}
//
//int main()
//{
//	double a = 2.3;
//	double b = 4.3;
//
//	int&& r1 = 10;
//	double&& r2 = a + b;
//	double&& r3 = fun(a);
//
//	//下面的代码会报错：表达式必须是可修改的左值
//	/*10 = 1;
//	a + b = 1;
//	fun(1.1) = 1;*/
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	//左值引用只能引用左值，不能引用右值
//	//int& b = 10;
//	//是const左值引用既可引用左值，也可引用右值
//	const int& b = 10;
//	const int& c = a;
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	//右值引用无法引用左值
//	//int&& b = a;
//	//右值引用可以引用move后的左值
//	int&& b = move(a);
//	return 0;
//}