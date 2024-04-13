//#include <iostream>
//#include <vector>
//using namespace std;
//int n = 0;
//vector<int> v;
//int ret = 0;
//int ll(int x)
//{
//    return x % 10;
//}
//int ff(int x)
//{
//    int ret = x;
//    while (x /= 10)
//    {
//        ret = x;
//    }
//    return ret;
//}
//
//void dfs(int i, int cnt, int last)
//{
//    ret = max(ret, cnt);
//    if (i >= n)
//    {
//        return;
//    }
//    if (last == -1 || ll(last) == ff(v[i]))
//    {
//        dfs(i + 1, cnt + 1, v[i]);
//    }
//    dfs(i + 1, cnt, last);
//}
//
//
//int main()
//{
//    cin >> n;
//    v.resize(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//    }
//    dfs(0, 0, -1);
//    cout << n - ret << endl;
//    return 0;
//}
////using namespace std;
////int ff(int x)
////{
////	int ret = x;
////	while (x /= 10)
////	{
////		ret = x;
////	}
////	return ret;
////}
////int main()
////{
////	int x = ff(61765);
////	cout << x << endl;
////	return 0;
////}