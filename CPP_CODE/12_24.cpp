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
//	//����Ĵ���ᱨ�����ʽ�����ǿ��޸ĵ���ֵ
//	/*10 = 1;
//	a + b = 1;
//	fun(1.1) = 1;*/
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	//��ֵ����ֻ��������ֵ������������ֵ
//	//int& b = 10;
//	//��const��ֵ���üȿ�������ֵ��Ҳ��������ֵ
//	const int& b = 10;
//	const int& c = a;
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	//��ֵ�����޷�������ֵ
//	//int&& b = a;
//	//��ֵ���ÿ�������move�����ֵ
//	int&& b = move(a);
//	return 0;
//}