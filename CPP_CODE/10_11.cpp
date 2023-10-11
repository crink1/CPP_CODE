//#include<iostream>
//using namespace std;
//int main()
//{
//	const int a = 10;
//	int* p = (int*)&a;
//	*p = 20;
//	cout << a << " " << *p;
//	return 0;
//}
//
//class Solution {
//public:
//    int peakIndexInMountainArray(vector<int>& arr) {
//        int left = 1;
//        int right = arr.size() - 2;
//        int mid = 0;
//        while (left < right)
//        {
//            mid = left + (right - left + 1) / 2;
//            if (arr[mid] > arr[mid - 1])
//            {
//                left = mid;
//            }
//            else if (arr[mid] < arr[mid - 1])
//            {
//                right = mid - 1;
//            }
//
//        }
//        return left;
//    }
//};