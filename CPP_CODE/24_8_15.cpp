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
//            dp[i] = i;//这里初始化第一行很难理解，我们把dp里的二维给压缩成了一维
//            //二维保存了很多信息,但其实我们只需要最后一行的信息。
//        }
//
//        int diffi, diffj, diffij;
//        for (int i = 1; i < m + 1; i++) {//这里开始第二行了，先把第二行第一列给赋值覆盖掉
//            //第一行之前赋的值，准备更新第二行的值了，这个外层就负责更新每一行的第一列
//            dp[0] = i;
//            diffij = dp[0] - 1;//这里其实就是求dp[i][0]的上面一个因为列数为0上面一个dp
//            //值肯定要-1这个值后面的内层循环列的时候要更新
//
//            for (int j = 1; j < n + 1; j++) {
//                diffj = dp[j];//如果想象成二维的话这里对应着i-1行的j列,就是以前的值我们 
//                //我们要保留下来，因为后面列还要靠它来更新.//下面这里一定注意str1[i-1]
//                //我这用两种方法每次都搞错这里，i-1才表示前i个字符
//                dp[j] = min(dp[j] + 1, min(dp[j - 1] + 1, ((str1[i - 1] == str2[j - 1]) ? 0 : 1) + diffij));
//                //上面这行min里的dp[j-1]之前已经更新过了的，min里的dp[j]其实是i-1行的j列,也就是没有
//                //覆盖掉的，等号左边就是即将更新的，他在这个内层循环的下一次又充当min里的dp[j-1]
//                diffij = diffj;//这里更新左上角的值，就是内层循环第一句那里为什么要保留了
//            }
//        }
//        cout << dp[n] << endl;//最后的dp[n]其实已经遍历m行了，只保留了最后一行
//        //这种方法空间复杂度就比较低
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
