//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 该数组最长严格上升子序列的长度
//     * @param a int整型vector 给定的数组
//     * @return int整型
//     */
//    int LIS(vector<int>& a) {
//        // write code here
//        long long n = a.size();
//        vector<long long> v;
//        v.push_back(a[0]);
//
//        for (long long i = 1; i < a.size(); i++)
//        {
//            if (a[i] > v.back())
//            {
//                v.push_back(a[i]);
//            }
//            else
//            {
//                long long left = 0;
//                long long right = v.size() - 1;
//                long long mid;
//                while (left < right)
//                {
//                    mid = left + (right - left) / 2;
//                    if (a[i] > v[mid])
//                    {
//                        left = mid + 1;
//                    }
//                    else
//                    {
//                        right = mid;
//                    }
//                }
//                v[left] = a[i];
//            }
//        }
//        return v.size();
//    }
//};
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    while (n--)
//    {
//        int x = 0;
//        cin >> x;
//        int t = 1;
//        int ret = 0;
//        while (x)
//        {
//            x -= t;
//            ret++;
//            if (x % (t * 2) == 0)
//            {
//                t *= 2;
//            }
//        }
//        cout << ret << endl;
//    }
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    int a[n];
//    int ret = 1;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 1; i < n - 1; i++)
//    {
//        if (a[i] > a[i - 1] && a[i] > a[i + 1] || a[i] < a[i - 1] && a[i] < a[i + 1])
//        {
//            ret++;
//            if (n - 3 != i)
//            {
//                i++;
//            }
//        }
//
//    }
//    cout << ret << endl;
//
//}
//// 64 位输出请用 printf("%lld")class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 该数组最长严格上升子序列的长度
//     * @param a int整型vector 给定的数组
//     * @return int整型
//     */
//    int LIS(vector<int>& a) {
//        // write code here
//        long long n = a.size();
//        vector<long long> v;
//        v.push_back(a[0]);
//
//        for (long long i = 1; i < a.size(); i++)
//        {
//            if (a[i] > v.back())
//            {
//                v.push_back(a[i]);
//            }
//            else
//            {
//                long long left = 0;
//                long long right = v.size() - 1;
//                long long mid;
//                while (left < right)
//                {
//                    mid = left + (right - left) / 2;
//                    if (a[i] > v[mid])
//                    {
//                        left = mid + 1;
//                    }
//                    else
//                    {
//                        right = mid;
//                    }
//                }
//                v[left] = a[i];
//            }
//        }
//        return v.size();
//    }
//};
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    while (n--)
//    {
//        int x = 0;
//        cin >> x;
//        int t = 1;
//        int ret = 0;
//        while (x)
//        {
//            x -= t;
//            ret++;
//            if (x % (t * 2) == 0)
//            {
//                t *= 2;
//            }
//        }
//        cout << ret << endl;
//    }
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    int a[n];
//    int ret = 1;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 1; i < n - 1; i++)
//    {
//        if (a[i] > a[i - 1] && a[i] > a[i + 1] || a[i] < a[i - 1] && a[i] < a[i + 1])
//        {
//            ret++;
//            if (n - 3 != i)
//            {
//                i++;
//            }
//        }
//
//    }
//    cout << ret << endl;
//
//}
//// 64 位输出请用 printf("%lld")