//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     * ����01��������Ľ��
//     * @param V int���� ���������
//     * @param n int���� ��Ʒ�ĸ���
//     * @param vw int����vector<vector<>> ��һά��Ϊn,�ڶ�ά��Ϊ2�Ķ�ά����,vw[i][0],vw[i][1]�ֱ�����i+1����Ʒ��vi,wi
//     * @return int����
//     */
//    int knapsack(int V, int n, vector<vector<int> >& vw) {
//        // write code here
//        vector<int> dp(V + 1);
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = V; j >= vw[i - 1][0]; j--)
//            {
//                dp[j] = max(dp[j], dp[j - vw[i - 1][0]] + vw[i - 1][1]);
//            }
//        }
//        return dp[V];
//
//
//
//    }
//};
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define int long long
//using namespace std;
//
//struct orange
//{
//    int s;
//    int a;
//};
//
//signed main() {
//    int n = 0, k = 0;
//    cin >> n >> k;
//
//    vector<orange> v(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i].a;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i].s;
//    }
//    sort(v.begin(), v.end(), [](struct orange x, struct orange y) {
//        if (x.s == y.s)
//        {
//            return x.a < y.a;
//        }
//        return x.s > y.s;
//        });
//
//    int reta = 0;
//    int rets = 0;
//    for (int i = 0; i < k; i++)
//    {
//        reta += v[i].a;
//        rets += v[i].s;
//    }
//
//    cout << reta << " " << rets << endl;
//
//
//}
//// 64 λ������� printf("%lld")
//#include <string>
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param param string�ַ���
//     * @return string�ַ���
//     */
//    string compressString(string param) {
//        // write code here
//        string ret;
//        int cnt = 1;
//        ret += param[0];
//        for (int i = 1; i < param.size(); i++)
//        {
//            if (param[i] == ret[ret.size() - 1])
//            {
//                cnt++;
//                if (i == param.size() - 1)
//                {
//                    ret += to_string(cnt);
//                }
//            }
//            else
//            {
//
//                if (cnt > 1)
//                {
//                    ret += to_string(cnt);
//                }
//                ret += param[i];
//
//                cnt = 1;
//
//            }
//        }
//
//        return ret;
//    }
//};