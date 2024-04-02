//#include<iostream>
//#include<vector>
//using namespace std;
//
//int n = 0;
//
//vector<int> a, b;
//
//bool cmin(int mid)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (b[i] < a[i] / mid)
//        {
//            return false;
//        }
//        return true;
//    }
//}
//
//bool cmax(int mid)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (b[i] > a[i] / mid)
//        {
//            return false;
//        }
//        return true;
//    }
//}
//
//int main()
//{
//    cin >> n;
//    a.resize(n);
//    b.resize(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i] >> b[i];
//    }
//
//    int left = 1;
//    int right = 1e9;
//    while (left < right)
//    {
//        int mid = left + right + 1 >> 1;
//        if (cmax(mid))
//        {
//            left = mid;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//
//    }
//    int lmin = 1;
//    int rmin = 1e9;
//    while (lmin < rmin)
//    {
//        int mid = lmin + rmin >> 1;
//        if (cmin(mid))
//        {
//            rmin = mid;
//        }
//        else
//        {
//            lmin = mid + 1;
//        }
//
//    }
//
//    cout << lmin << " " << left;
//
//    /*for (int i = 1; i <= 1e6; i++)
//    {
//        int flag = 1;
//        if (i == 20)
//        {
//            int a;
//        }
//        for (int j = 0; j < n; j++)
//        {
//            if (b[j] != (a[j] / i))
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (1 == flag)
//        {
//            cout << i << endl;
//            break;
//        }
//    }
//   
//    for (int i = 1e6; i >= 1; i--)
//    {
//        int flag = 1;
//        for (int j = 0; j < n; j++)
//        {
//            if (b[j] != (a[j] / i))
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (1 == flag)
//        {
//            cout << i << endl;
//            break;
//        }
//    }*/
//    return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int a[N];
//int n, ans;
//
//int get_first(int x)//获取数字的最高位
//{
//	int res = 0;
//	while (x)
//	{
//		res = x % 10;
//		x /= 10;
//	}
//	return res;
//}
//
//int get_final(int x)//获取数字的最后一位
//{
//	return x % 10;
//}
//
//void dfs(int i, int cnt, int last)
//{
//	if (i >= n)
//	{
//		ans = max(ans, cnt);
//		return;
//	}
//
//	if (last == -1 || get_final(last) == get_first(a[i]))
//	{
//		dfs(i + 1, cnt + 1, a[i]);
//	}
//	dfs(i + 1, cnt, last);
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//
//	dfs(0, 0, -1);
//	cout << n - ans << endl;
//	return 0;
//}