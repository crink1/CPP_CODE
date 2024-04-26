//class Solution {
//public:
//    string addBinary(string a, string b) {
//        int c1 = a.size() - 1;
//        int c2 = b.size() - 1;
//        string ret;
//        int t = 0;
//        while (c1 >= 0 || c2 >= 0 || t)
//        {
//            if (c1 >= 0)
//            {
//                t += a[c1--] - '0';
//            }
//            if (c2 >= 0)
//            {
//                t += b[c2--] - '0';
//            }
//            ret += t % 2 + '0';
//            t /= 2;
//
//        }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};

//#include<iostream>
//void swap(int** x, int** y)
//{
//
//}
//
//int main()
//{
//    int x = 3;
//    int y = 4;
//    int* ptrX = &x;
//    int* ptrY = &y;
//    swap(&ptrX, &ptrY);
//
//	return 0;
//}