//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool deep(vector<int>& v, int i, int ret)
//{
//    if (ret < 0)
//    {
//        return false;
//    }
//    if (ret == 0)
//    {
//        return true;
//    }
//
//    for (int j = i; j < v.size(); j++)
//    {
//        if (deep(v, j, ret - v[j]))
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> v(n);
//    int sum = 0;
//    for (auto& i : v)
//    {
//        cin >> i;
//        sum += i;
//    }
//
//    if (sum % 2 != 0)
//    {
//        cout << "false";
//        return 0;
//    }
//
//    if (deep(v, 0, sum / 2))
//    {
//        cout << "true" << endl;
//    }
//    else {
//        cout << "false" << endl;
//    }
//
//
//
//
//
//}
//// 64 位输出请用 printf("%lld")
//
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param schedule int整型vector<vector<>>
//     * @return bool布尔型
//     */
//    bool hostschedule(vector<vector<int> >& schedule) {
//        // write code here
//        sort(schedule.begin(), schedule.end(), [](vector<int>& x, vector<int>& y) {
//            return x[0] < y[0];
//            });
//
//        for (int i = 1; i < schedule.size(); i++)
//        {
//            if (schedule[i][0] < schedule[i - 1][1])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};
//
//#include <iostream>
//#include <climits>
//#include <cmath>
//using namespace std;
//
//
//
//int cnt[26] = { 0 };
//int cmax = 0;
//int cmin = INT_MAX;
//
//
//bool isp(int x)
//{
//    if (x < 2)
//    {
//        return false;
//    }
//    for (int i = 2; i < sqrt(x); i++)
//    {
//        if (x % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//
//int main() {
//
//    char c;
//    while (scanf("%c", &c) != EOF) ++cnt[c - 'a'];
//    for (int i = 0; i < 26; i++)
//    {
//        if (cnt[i] == 0)
//        {
//            continue;
//        }
//
//        cmin = min(cmin, cnt[i]);
//        cmax = max(cmax, cnt[i]);
//    }
//    int x = cmax - cmin;
//    if (isp(x))
//    {
//        cout << "Lucky Word" << endl;
//        cout << x << endl;
//    }
//    else
//    {
//        cout << "No Answer" << endl;
//        cout << "0" << endl;
//    }
//
//
//}
//// 64 位输出请用 printf("%lld")