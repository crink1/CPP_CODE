//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     * ջ����
//     * @param a int����vector ������ջ˳��
//     * @return int����vector
//     */
//    vector<int> solve(vector<int>& a) {
//        // write code here
//        vector<int> ret;
//        vector<int> dp(a.size() + 1, 0);
//        for (int i = a.size() - 1; i >= 0; i--)
//        {
//            dp[i] = max(dp[i + 1], a[i]);
//        }
//
//        stack<int> st;
//        for (int i = 0; i < a.size(); i++)
//        {
//            while (!st.empty() && st.top() > dp[i])
//            {
//                ret.push_back(st.top());
//                st.pop();
//            }
//            st.push(a[i]);
//        }
//
//        while (!st.empty())
//        {
//            ret.push_back(st.top());
//            st.pop();
//        }
//        return ret;
//
//    }
//};
//#include <iostream>
//using namespace std;
//
//int main() {
//    double n = 0;
//    double m = 0;
//    cin >> n >> m;
//    double sum = 0;
//    double t = 0;
//    for (int i = 0; i < n - m; i++)
//    {
//        cin >> t;
//        sum += t;
//    }
//    printf("%.5lf ", (sum + 1.0 * m) / n);
//    printf("%.5lf ", (sum + 5.0 * m) / n);
//
//
//}
//// 64 λ������� printf("%lld")