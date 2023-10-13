//#include <iostream>
//#include <vector>
//using namespace std;
//
//

//DP35
//int main() {
//    int n, m, p;
//    cin >> n >> m >> p;
//    vector<vector<int>> vv;
//    vv.resize(n + 1);
//    vv[0].resize(m + 1, 0);
//    for (int i = 1; i < vv.size(); i++)
//    {
//        vv[i].resize(m + 1);
//        for (int j = 1; j < vv[i].size(); j++)
//        {
//            cin >> vv[i][j];
//        }
//    }
//    vector<vector<long long>> dp;
//    dp.resize(n + 1);
//    dp[0].resize(m + 1, 0);
//    for (int i = 1; i < dp.size(); i++)
//    {
//        dp[i].resize(m + 1);
//        for (int j = 1; j < dp[i].size(); j++)
//        {
//            dp[i][j] = dp[i][j - 1] + vv[i][j] + dp[i - 1][j] - dp[i - 1][j - 1];
//
//        }
//
//    }
//    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
//    while (cin >> x1 >> y1 >> x2 >> y2)
//    {
//        cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << endl;
//    }
//}







//template<typename Type>
//
//Type Max(const Type& a, const Type& b)
//
//{
//
//	cout << "This is Max<Type>" << endl;
//
//	return a > b ? a : b;
//
//}
//
//template<>
//
//int Max<int>(const int& a, const int& b)
//
//{
//
//	cout << "This is Max<int>" << endl;
//
//	return a > b ? a : b;
//
//}
//
//template<>
//
//char Max<char>(const char& a, const char& b)
//
//{
//
//	cout << "This is Max<char>" << endl;
//
//	return a > b ? a : b;
//
//}
//
//int Max(const int& a, const int& b)
//
//{
//
//	cout << "This is Max" << endl;
//
//	return a > b ? a : b;
//
//}
//
//int main()
//
//{
//
//	Max(10, 20);
//
//	Max(12.34, 23.45);
//
//	Max('A', 'B');
//
//	Max<int>(20, 30);
//
//	return 0;
//
//}
//int main()
//{
//	vector<int> v(10);
//	cout << v.size();
//	return 0;
//}

//class a
//{
//
//private:
//	static int b;
//};
//
//int a::b = 3;
//

//class myclass
//{
//public:
//	void foo()
//	{
//		delete this;
//	}
//};
//
//int main()
//{
//	myclass* my = new myclass;
//	my->foo();
//	return 0;
//}