//#include <algorithm>
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param str string�ַ���
//     * @return string�ַ���vector
//     */
//    vector<string> Permutation(string str) {
//        // write code here
//        vector<string> ret;
//        if (str.empty())
//        {
//            return ret;
//        }
//        sort(str.begin(), str.end());
//        do {
//            ret.push_back(str);
//        } while (next_permutation(str.begin(), str.end()));
//        return ret;
//    }
//};
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    unordered_map<char, int> hash;
//    int l = 0;
//    int r = 0;
//    bool flag = false;
//    int ret = 0;
//    while (r < s.size())
//    {
//        hash[s[r]]++;
//        while (hash.size() > 2 && l <= r - 2)
//        {
//            hash[s[l]]--;
//            if (hash[s[l]] == 0)
//            {
//                hash.erase(s[l]);
//            }
//            l++;
//        }
//        ret = max(ret, r - l + 1);
//        r++;
//    }
//    cout << ret << endl;
//}
//// 64 λ������� printf("%lld")
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    cout << (1 << (n - 1));
//}
//// 64 λ������� printf("%lld")