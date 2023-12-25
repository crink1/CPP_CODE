//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> dp(n, vector<int>(3));
//        dp[0][0] = -prices[0];
//        for (int i = 1; i < n; i++)
//        {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][2]);
//            dp[i][2] = dp[i - 1][0] + prices[i];
//        }
//        return max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
//    }
//};
//#include<iostream>
//#include<string>
//using namespace std;

//int main()
//{
//	string s = "123";
//
//	string s1(move(s));
//	return 0;
//}
//template<typename T>
//void PerfectForward(T&& t)
//{
//	Fun(std::forward<T>(t));
//}
//int main()
//{
//	PerfectForward(10);           // 右值
//	int a;
//	PerfectForward(a);            // 左值
//	PerfectForward(std::move(a)); // 右值
//	const int b = 8;
//	PerfectForward(b);      // const 左值
//	PerfectForward(std::move(b)); // const 右值
//	return 0;
//}

//template<class T>
//void showlist(const T& t)
//{
//	cout << t << endl;
//}
//
//template<class T, class ...Args>
//void showlist(T val, Args ...args)
//{
//	cout<< val<<" ";
//	showlist(args...);
//}
//
//int main()
//{
//	showlist(1);
//	showlist(1, 3, 4);
//	showlist(1, "S", string("rrr"));
//	return 0;
//}
//#include<vector>
//template<class T>
//int outarg(const T& t)
//{
//	cout << t << endl;
//	return 0;
//}
//
//template<class T, class ...Args>
//void showlist(T val, Args ...args)
//{
//	int arr[] = {outarg(args)...};
//	cout << endl;
//}
//
//int main()
//{
//	showlist(7);
//	showlist(1, 3, 4);
//	showlist(1, "S", string("rrr"));
//	return 0;
//}
//int main()
//{
//	vector<Goods> v = { { "苹果", 2.1, 5 }, { "香蕉", 3, 4 }, { "橙子", 2.2,
//   3 }, { "菠萝", 1.5, 4 } };
//	sort(v.begin(), v.end(), [](const Goods& g1, const Goods& g2) {
//		return g1._price < g2._price; });
//	sort(v.begin(), v.end(), [](const Goods& g1, const Goods& g2) {
//		return g1._price > g2._price; });
//	sort(v.begin(), v.end(), [](const Goods& g1, const Goods& g2) {
//		return g1._evaluate < g2._evaluate; });
//	sort(v.begin(), v.end(), [](const Goods& g1, const Goods& g2) {
//		return g1._evaluate > g2._evaluate; });
//}

//#include<functional>
//#include<map>
//
//void swap_fun(int& r1, int& r2)
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//
//class swap_fun2
//{
//public:
//	void operator()(int& r1, int& r2)
//	{
//		int tmp = r1;
//		r1 = r2;
//		r2 = tmp;
//	}
//};
//
//int main()
//{
//	int x = 0;
//	int y = 1;
//	cout << x << " " << y << endl;
//
//	auto f1 = [](int& r1, int& r2)
//		{
//			int tmp = r1;
//			r1 = r2;
//			r2 = tmp;
//		};
//	f1(x, y);
//	cout << x << " " << y << endl;
//
//	function<void(int& a, int& b)> f2 = f1;
//	function<void(int& a, int& b)> f3 = swap_fun;
//	function<void(int& a, int& b)> f4 = swap_fun2();
//	f4(x, y);
//	cout << x << " " << y << endl;
//
//	map<string, function<void(int& a, int& b)>> cmp = { {"lambda",f1},{"仿函数",swap_fun2()},{"函数指针",swap_fun}};
//	cmp["仿函数"](x, y);
//	cout << x << " " << y << endl;
//
//
//	return 0;
//
//}


