//class Solution {
//public:
//    int maxSumDivThree(vector<int>& nums) {
//        const int INF = 0x3f3f3f3f;
//        int sum = 0;
//        int x1 = INF;
//        int x2 = INF;
//        int y1 = INF;
//        int y2 = INF;
//
//        for (auto& x : nums)
//        {
//            sum += x;
//            if (x % 3 == 1)
//            {
//                if (x < x1)
//                {
//                    x2 = x1;
//                    x1 = x;
//                }
//                else if (x < x2)
//                {
//                    x2 = x;
//                }
//            }
//            else if (x % 3 == 2)
//            {
//                if (x < y1)
//                {
//                    y2 = y1;
//                    y1 = x;
//                }
//                else if (x < y2)
//                {
//                    y2 = x;
//                }
//            }
//
//        }
//
//        if (sum % 3 == 0)
//        {
//            return sum;
//        }
//        else if (sum % 3 == 1)
//        {
//            return max(sum - x1, sum - y1 - y2);
//        }
//        else
//        {
//            return max(sum - y1, sum - x1 - x2);
//
//        }
//    }
//};
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int size = 0;
//	int n = 0;
//	cin >> size >> n;
//	vector<int> a;
//	for (int i = 0; i < size; i++)
//	{
//		int x = 0;
//		cin >> x;
//		a.push_back(x);
//	}
//	int x = 0;
//	vector<int>b(a);
//	while (cin >> x)
//	{
//		int sum = 0;
//		for (int i = 0; i < size; i++)
//		{
//			if (a[i] != x)
//			{
//				b[i] = b[i] * 2;
//				sum += b[i];
//			}
//		}
//		
//		cout << sum << endl;
//
//		return 0;
//	}
//}