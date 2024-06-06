//class Solution {
//public:
//    bool isPerfectSquare(int num) {
//        int left = 0;
//        int right = num;
//
//        while (left <= right)
//        {
//
//            int mid = left + (right - left) / 2;
//            long  tmp = (long)mid * mid;
//            if (tmp < num)
//            {
//                left = mid + 1;
//            }
//            else if (tmp > num)
//            {
//                right = mid - 1;
//            }
//            else
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};