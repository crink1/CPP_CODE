//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    int len = s.size();
//    s.resize(100);
//
//    for (int i = len, j = len - 1; i < 2 * len - 1;)
//    {
//        s[i++] = s[--j];
//    }
//    len = 2 * len - 1;
//    long num = 0, cnt = 0, n = 1;
//    while (len--)
//    {
//        num += n * (s[len] - '0');
//        n *= 10;
//    }
//    int i = 0;
//    int j = sqrt(num);
//
//    for (i = 2; i <= j; i++)
//    {
//        if (num % i == 0)
//        {
//            break;
//        }
//    }
//    cout << (i > j ? "prime" : "noprime");
//    return 0;
//
//
//}
//// 64 Œª ‰≥ˆ«Î”√ printf("%lld")