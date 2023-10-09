//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	for (auto& i : s)
//	{
//		cout << i << " ";
//	}
//	
//	return 0;
//}



//69 x的平方根
//class Solution {
//public:
//    int mySqrt(int x) {
//        if (x < 1)
//        {
//            return 0;
//        }
//        int left = 1;
//        int right = x;
//        long long mid = 0;
//        while (left < right)
//        {
//            mid = left + (right - left + 1) / 2;
//            if ((mid * mid) <= x)
//            {
//                left = mid;
//            }
//            else
//            {
//                right = mid - 1;
//            }
//        }
//        return left;
//    }
//};