//#include <algorithm>
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param str string字符串
//     * @return string字符串vector
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
//// 64 位输出请用 printf("%lld")
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    cout << (1 << (n - 1));
//}
//// 64 位输出请用 printf("%lld")