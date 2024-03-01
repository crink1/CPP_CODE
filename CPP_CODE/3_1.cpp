//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    string  str;
//    getline(cin, str);
//
//    vector<string> v;
//    int left = 0;
//    int right = 0;
//    while (right < (int)str.size())
//    {
//        if (str[right] == ' ')
//        {
//            v.push_back(str.substr(left, right - left));
//            left = ++right;
//
//        }
//        right++;
//
//    }
//    v.push_back(str.substr(left, right - left));
//
//
//    reverse(v.begin(), v.end());
//    for (auto& i : v)
//    {
//        cout << i;
//    }
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int knapsack(vector<int>& weights, vector<int>& values, int M) {
//    int n = weights.size();
//    vector<vector<int>> dp(n + 1, vector<int>(M + 1, 0));
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= M; ++j) {
//            if (weights[i - 1] > j) {
//                dp[i][j] = dp[i - 1][j];
//            }
//            else {
//                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i - 1]] + values[i - 1]);
//            }
//        }
//    }
//
//    return dp[n][M];
//}
//
//int main() {
//    vector<int> weights;
//    vector<int> values;
//    int M = 0;
//    int n = 0;
//    cin >> n;
//    cin >> M;
//    int x = 0;;
//    for (int i = 0; i < n; i++)
//    {
//
//        cin >> x;
//        weights.push_back(x);
//    }
//    for (int i = 0; i < n; i++)
//    {
//
//        cin >> x;
//        values.push_back(x);
//    }
//
//
//
//    cout << knapsack(weights, values, M) << endl;
//
//    return 0;
//}