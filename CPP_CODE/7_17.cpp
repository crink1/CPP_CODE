//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param numbers int����vector
//     * @return bool������
//     */
//    bool IsContinuous(vector<int>& numbers) {
//        // write code here
//        sort(numbers.begin(), numbers.end());
//        int zero = 0;
//        for (int i = 0; i < numbers.size(); i++)
//        {
//            if (numbers[i] == 0)
//            {
//                zero++;
//                if (zero > 4)
//                {
//                    return false;
//                }
//            }
//            else if (numbers[i] == numbers[i + 1])
//            {
//                return false;
//            }
//
//        }
//        int ret = numbers[4] - numbers[zero];
//        if (ret <= 4)
//            return true;
//        else
//            return false;
//    }
//};
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> dp(n);
//    dp[0] = 1;
//    dp[1] = 2;
//    for (int i = 2; i < n; i++)
//    {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//    cout << dp[n - 1];
//
//}
//// 64 λ������� printf("%lld")
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    int n = s.size();
//    int k = 0;
//
//    string ret;
//    for (int i = n - 1; i >= 0; i--)
//    {
//        if (k == 3)
//        {
//            k = 0;
//            ret = ',' + ret;
//
//        }
//
//        ret = s[i] + ret;
//        k++;
//
//    }
//    cout << ret;
//}
//// 64 λ������� printf("%lld")