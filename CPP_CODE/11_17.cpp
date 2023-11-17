//class Solution {
//public:
//    double Pow(double x, long long n)
//    {
//        if (n == 0)
//        {
//            return 1;
//        }
//        double tmp = myPow(x, n / 2);
//
//        return n % 2 == 0 ? tmp * tmp : tmp * tmp * x;
//    }
//    double myPow(double x, int n) {
//        if (n < 0)
//        {
//            long long t = n;
//            t = -t;
//            return 1.0 / Pow(x, t);
//        }
//        return Pow(x, n);
//
//    }
//};