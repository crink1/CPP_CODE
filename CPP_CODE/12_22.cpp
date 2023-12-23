//#include<iostream>
//#include<vector>
//#include<list>
//#include<map>
//using namespace std;

//class Solution {
//public:
//    int deleteAndEarn(vector<int>& nums) {
//        int arr[10001] = { 0 };
//        for (auto e : nums)
//        {
//            arr[e] += e;
//        }
//
//        vector<int> f(10001);
//        auto g = f;
//        f[0] = arr[0];
//        for (int i = 1; i < 10001; i++)
//        {
//            f[i] = g[i - 1] + arr[i];
//            g[i] = max(g[i - 1], f[i - 1]);
//        }
//        return max(f[10000], g[10000]);
//    }
//};
//struct display
//{
//	int _a;
//	int _b;
//};
//
//int main()
//{
//	vector<int> arr = { 1,2,3,4 };
//	list<int> li = { 1,2,3,4 };
//	map<string, string> m = { {"hello","ÄãºÃ"}, {"111","222"} };
//	arr = { 2,3,4,5 };
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	auto p = &i;
//	cout << typeid(p).name() << endl;
//
//	vector<int> v = { 2,3,4 };
//	auto it = v.begin();
//	cout << typeid(it).name() << endl;
//
//	return 0;
//}
//int main()
//{
//	int i = 2;
//	double j = 3.2;
//
//	decltype(i * j) ret;
//	cout << typeid(ret).name() << endl;
//
//
//	return 0;
//}