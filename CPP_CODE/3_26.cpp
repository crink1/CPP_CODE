//#include<iostream>
//#include<regex>
//using namespace std;
//
//int main()
//{
//	string str = "/num/1234";
//	regex e("/num/(\\d+)");
//	smatch matches;
//
//	bool re = regex_match(str, matches, e);
//	if (re == false)
//	{
//		return -1;
//	}
//	for (auto& i : matches)
//	{
//		cout << i << endl;
//	}
//	cout << endl;
//
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <regex>
//
//int main()
//{
//
//    if (std::regex_match("subject", std::regex("(sub)(.*)")))
//        std::cout << "string literal matched\n";
//
//    const char cstr[] = "subject";
//    std::string s("subject");
//    std::regex e("(sub)(.*)");
//
//    if (std::regex_match(s, e))
//        std::cout << "string object matched\n";
//
//    if (std::regex_match(s.begin(), s.end(), e))
//        std::cout << "range matched\n";
//
//    std::cmatch cm;    // same as std::match_results<const char*> cm;
//    std::regex_match(cstr, cm, e);
//    std::cout << "string literal with " << cm.size() << " matches\n";
//
//    std::smatch sm;    // same as std::match_results<string::const_iterator> sm;
//    std::regex_match(s, sm, e);
//    std::cout << "string object with " << sm.size() << " matches\n";
//
//    std::regex_match(s.cbegin(), s.cend(), sm, e);
//    std::cout << "range with " << sm.size() << " matches\n";
//
//    // using explicit flags:
//    std::regex_match(cstr, cm, e, std::regex_constants::match_default);
//
//    std::cout << "the matches were: ";
//    for (unsigned i = 0; i < cm.size(); ++i) {
//        std::cout << "[" << cm[i] << "] ";
//    }
//
//    std::cout << std::endl;
//
//    return 0;
//}
//
//#include <cstring>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int N = 1001;
//int v[N];
//int w[N];
//int dp[N][N];
//
//int main() {
//    int n = 0;
//    int V = 0;
//    cin >> n >> V;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> v[i] >> w[i];
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 0; j <= V; j++)
//        {
//            dp[i][j] = dp[i - 1][j];
//            if (j - v[i] >= 0)
//            {
//                dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//            }
//        }
//    }
//    cout << dp[n][V] << endl;
//
//    memset(dp, 0, sizeof(dp));
//
//    for (int i = 1; i <= V; i++)
//    {
//        dp[0][i] = -1;
//    }
//
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 0; j <= V; j++)
//        {
//            dp[i][j] = dp[i - 1][j];
//            if (j >= v[i] && dp[i][j - v[i]] != -1)
//            {
//                dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//            }
//        }
//    }
//    int ret = dp[n][V] == -1 ? 0 : dp[n][V];
//
//    cout << ret << endl;
//
//    return 0;
//
//}

//#include <cstring>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int N = 1001;
//int v[N];
//int w[N];
//int dp[N];
//
//int main() {
//    int n = 0;
//    int V = 0;
//    cin >> n >> V;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> v[i] >> w[i];
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = v[i]; j <= V; j++)
//        {
//
//
//            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//
//        }
//    }
//    cout << dp[V] << endl;
//
//    memset(dp, 0, sizeof(dp));
//
//    for (int i = 1; i <= V; i++)
//    {
//        dp[i] = -1;
//    }
//
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = v[i]; j <= V; j++)
//        {
//            if (dp[j - v[i]] != -1)
//                dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//
//        }
//    }
//    int ret = dp[V] == -1 ? 0 : dp[V];
//
//    cout << ret << endl;
//
//
//
//
//
//
//    return 0;
//
//
//}
