//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//
//string rearrangeString(const string& s) {
//    if (s.empty()) {
//        return "no";
//    }
//
//    // 统计每个字符的频率
//    unordered_map<char, int> counter;
//    for (char c : s) {
//        counter[c]++;
//    }
//
//    // 使用优先队列（最大堆）来存储字符及其频率
//    priority_queue<pair<int, char>> maxHeap;
//    for (const auto& entry : counter) {
//        maxHeap.push({ entry.second, entry.first });
//    }
//
//    string result;
//    pair<int, char> prev(0, '\0');
//
//    while (!maxHeap.empty()) {
//        auto current = maxHeap.top();
//        maxHeap.pop();
//        result += current.second;
//
//        // 如果前一个字符的频率大于0，则将其重新加入堆中
//        if (prev.first > 0) {
//            maxHeap.push(prev);
//        }
//
//        // 更新前一个字符和频率
//        current.first--;
//        prev = current;
//    }
//
//    // 如果结果字符串的长度和原字符串不一致，说明无法重新排列
//    if (result.length() != s.length()) {
//        return "no";
//    }
//
//    return result;
//}
//
//
//int main() {
//    int n = 0;
//    cin >> n;
//
//    string s;
//    cin >> s;
//
//    string ret = rearrangeString(s);
//
//    if (ret == "no")
//    {
//        cout << "no";
//    }
//    else
//    {
//        cout << "yes" << endl << ret;
//
//    }
//
//
//}
//// 64 位输出请用 printf("%lld")
//
//
//#include <unordered_set>
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param arr int整型vector the array
//     * @return int整型
//     */
//    int maxLength(vector<int>& arr) {
//        // write code here
//        unordered_set<int> hash;
//        size_t Max = 0;
//
//        int left = 0;
//        int right = 0;
//        while (right < arr.size())
//        {
//            if (hash.count(arr[right]))
//            {
//                while (arr[left] != arr[right])
//                {
//                    hash.erase(arr[left++]);
//                }
//                hash.erase(arr[left++]);
//
//            }
//            else
//            {
//                hash.insert(arr[right++]);
//            }
//            Max = max(Max, hash.size());
//
//        }
//        return Max;
//
//    }
//};
//
//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//int main() {
//    int t = 0;
//    cin >> t;
//
//    while (t--)
//    {
//        int n = 0;
//        int k = 0;
//        cin >> n >> k;
//        int cnt = 0;
//        int ret = 0;
//        char w;
//        while (n--)
//        {
//            cin >> w;
//
//            if (w == 'W')
//            {
//                cnt++;
//                if (cnt >= 3)
//                {
//                    ret += k;
//                }
//                else
//                {
//                    ret += 1;
//                }
//
//            }
//            else if (w == 'L')
//            {
//                ret--;
//                cnt = 0;
//            }
//        }
//
//        cout << ret << endl;
//    }
//
//    return 0;
//
//}
//// 64 位输出请用 printf("%lld")