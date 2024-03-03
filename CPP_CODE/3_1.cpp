//class Solution {
//public:
//    int findContentChildren(vector<int>& g, vector<int>& s) {
//        sort(g.begin(), g.end());
//        sort(s.begin(), s.end());
//
//        int m = 0;
//        int n = 0;
//        int ret = 0;
//        while (m < g.size() && n < s.size())
//        {
//            if (s[n] >= g[m])
//            {
//                ret++;
//                n++;
//                m++;
//            }
//            else
//            {
//                n++;
//            }
//        }
//
//        return ret;
//
//    }
//};

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
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	string str;
//	vector<string> v = { "cheerful", "glad", "happy", "pleased"};
//	
//	while (cin >> str)
//	{
//		int f = 0;
//		for (auto& i : v)
//		{
//			if (str.find(i.c_str()) != string::npos)
//			{
//				cout << "Yes" << endl;
//				f = 1;
//			}
//		}
//		if (f == 0)
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//
//std::pair<double, int> convertToStandard(int N) {
//    int d = std::floor(std::log10(N)) + 1;
//    double a = static_cast<double>(N) / std::pow(10, d - 1);
//    if (a >= 9) {
//        a /= 10;
//        d += 1;
//    }
//    else if (a <= 1) {
//        a *= 10;
//        d -= 1;
//    }
//    a = round(a * 10) / 10;
//    int c = d - 1;
//    return std::make_pair(a, c);
//}
//
//int main() {
//    int N;
//    std::cin >> N;
//    auto result = convertToStandard(N);
//    std::cout << result.first << "*10^" << result.second << std::endl;
//    printf("%.1lf*10^%d", result.first, result.second);
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//
//std::pair<double, int> convertToStandard(long long N) {
//    long double d = static_cast<int>(std::log10(N)) + 1;
//    long double a = static_cast<double>(N) / std::pow(10, d - 1);
//    if (a >= 9) {
//        a /= 10;
//        d += 1;
//    }
//    else if (a <= 1) {
//        a *= 10;
//        d -= 1;
//    }
//    a = round(a * 10) / 10;
//    int c = d - 1;
//    return std::make_pair(a, c);
//}
//
//int main() {
//    long long N;
//    std::cin >> N;
//    auto result = convertToStandard(N);
//    std::cout << std::fixed << std::setprecision(1) << result.first << " * 10^" << result.second << std::endl;
//    return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string str;
//	cin >> str;
//	//�жϵ�һ���ַ��Ƿ�Ϊ0(�˸������Ƿ����1)
//	if (str[0] != '0') {
//		int flag;//��¼С�����λ��
//		flag = str.find('.');//find��������Ѱ��
//		cout << str[0] << ".";
//		//�ٴ�ӡС�����ƶ�ǰ���м��
//		for (int i = 1; i < flag; ++i) {
//			cout << str[i];
//		}
//		//ʣ���
//		for (int i = flag + 1; i < str.length(); ++i) {
//			cout << str[i];
//		}
//		cout << "e" << flag - 1;
//	}
//	//��һ����Ϊ0 
//	else {
//		//Ѱ�ҵ�һ����0����λ��
//		int Flag = 0;
//		for (int i = 0; i < str.length(); ++i) {
//			if (str[i] != '0' && str[i] != '.') {
//				Flag = i;
//				break;
//			}
//		}
//		//��ֻ��һλ��Ч���ֵ������������0.003�����ж� 
//		if (Flag + 1 == str.length())
//			cout << str[Flag];//��ӡ��һ����
//		else {
//			cout << str[Flag] << ".";//��ӡ��һ����
//		}
//
//		//��ӡ�����
//		for (int i = Flag + 1; i < str.length(); ++i) {
//			cout << str[i];
//		} cout << "e-" << Flag - 1;//С��1 eΪ�����Ӹ����� 
//	}
//}

//
//#include <iostream>
//#include <cmath>
//#include <string>
//#include <iomanip>
//std::pair<double, int> convertToStandard(const std::string& N) 
//{
//	long double num = std::stold(N);
//	int d = static_cast<int>(N.find('.') != std::string::npos ? N.find('.') : N.size()) - (N[0] == '-' ? 1 : 0);
//	double a = num / std::pow(10, d - 1);
//	if (a >= 9) 
//	{
//		a /= 10;
//		d += 1;
//	}
//	else if (a <= 1) 
//	{
//		a *= 10;
//		d -= 1;
//	}
//	a = round(a * 10) / 10;
//	int c = d - 1;
//	return std::make_pair(a, c);
//}
//
//int main() 
//{
//	std::string N;
//	std::cin >> N;
//	auto result = convertToStandard(N);
//	printf("%.1lf*10^%d", result.first, result.second);
//	return 0;
//}

