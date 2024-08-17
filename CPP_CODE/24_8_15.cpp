//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    string str1, str2;
//    while (cin >> str1 >> str2) {
//        int m = str1.size();
//        int n = str2.size();
//        vector<int> dp(n + 1, 0);
//
//        for (int i = 0; i < n + 1; i++) {
//            dp[i] = i;//�����ʼ����һ�к�����⣬���ǰ�dp��Ķ�ά��ѹ������һά
//            //��ά�����˺ܶ���Ϣ,����ʵ����ֻ��Ҫ���һ�е���Ϣ��
//        }
//
//        int diffi, diffj, diffij;
//        for (int i = 1; i < m + 1; i++) {//���￪ʼ�ڶ����ˣ��Ȱѵڶ��е�һ�и���ֵ���ǵ�
//            //��һ��֮ǰ����ֵ��׼�����µڶ��е�ֵ�ˣ�������͸������ÿһ�еĵ�һ��
//            dp[0] = i;
//            diffij = dp[0] - 1;//������ʵ������dp[i][0]������һ����Ϊ����Ϊ0����һ��dp
//            //ֵ�϶�Ҫ-1���ֵ������ڲ�ѭ���е�ʱ��Ҫ����
//
//            for (int j = 1; j < n + 1; j++) {
//                diffj = dp[j];//�������ɶ�ά�Ļ������Ӧ��i-1�е�j��,������ǰ��ֵ���� 
//                //����Ҫ������������Ϊ�����л�Ҫ����������.//��������һ��ע��str1[i-1]
//                //���������ַ���ÿ�ζ�������i-1�ű�ʾǰi���ַ�
//                dp[j] = min(dp[j] + 1, min(dp[j - 1] + 1, ((str1[i - 1] == str2[j - 1]) ? 0 : 1) + diffij));
//                //��������min���dp[j-1]֮ǰ�Ѿ����¹��˵ģ�min���dp[j]��ʵ��i-1�е�j��,Ҳ����û��
//                //���ǵ��ģ��Ⱥ���߾��Ǽ������µģ���������ڲ�ѭ������һ���ֳ䵱min���dp[j-1]
//                diffij = diffj;//����������Ͻǵ�ֵ�������ڲ�ѭ����һ������ΪʲôҪ������
//            }
//        }
//        cout << dp[n] << endl;//����dp[n]��ʵ�Ѿ�����m���ˣ�ֻ���������һ��
//        //���ַ����ռ临�ӶȾͱȽϵ�
//    }
//}
//
//
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int minDistance(string& s1, string& s2) {
//        int len1 = s1.size(), len2 = s2.size();
//        if (len1 * len2 == 0)
//            return 0;
//        vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
//        for (int i = 0; i < len1 + 1; ++i) {
//            for (int j = 0; j < len2 + 1; ++j) {
//                if (0 == i) dp[i][j] = j;
//                else if (0 == j) dp[i][j] = i;
//                else {
//                    if (s1[i] != s2[j])
//                        dp[i][j] = min(min(dp[i - 1][j - 1] + 1, dp[i - 1][j] + 1), dp[i][j - 1] + 1);
//                    else
//                        dp[i][j] = min(min(dp[i - 1][j - 1], dp[i - 1][j] + 1), dp[i][j - 1] + 1);
//                }
//            }
//        }
//        return dp[len1][len2];
//    }
//};
//int main() {
//    Solution sol;
//    string s1, s2;
//    while (getline(cin, s1) && getline(cin, s2))
//        cout << sol.minDistance(s1, s2) << endl;
//    return 0;
//}
