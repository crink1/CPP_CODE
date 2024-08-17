//#include <iostream>
//
//using namespace std;
//#define int long long
//signed main() {
//    int n = 0;
//    cin >> n;
//    string s;
//    cin >> s;
//    int arr[26]{};
//    int cnt[26]{};
//
//    int ret = 0;
//    int index = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        index = s[i] - 'a';
//        ret += arr[index];
//        arr[index] += i - cnt[index]++;
//    }
//    cout << ret;
//}
//// 64 位输出请用 printf("%lld")
//
//
//#include <functional>
//#include <iostream>
//#include <queue>
//#define int long long
//using namespace std;
//
//signed main() {
//    int n = 0;
//    cin >> n;
//    priority_queue<int, vector<int>, greater<int>> q;
//    while (n--)
//    {
//        int t = 0;
//        cin >> t;
//        q.push(t);
//    }
//
//    int ret = 0;
//    int t1 = 0;
//    int t2 = 0;
//    int tmp = 0;
//    while (q.size() > 1)
//    {
//        t1 = q.top();
//        q.pop();
//        t2 = q.top();
//        q.pop();
//        tmp = t1 + t2;
//        ret += tmp;
//        q.push(tmp);
//    }
//    cout << ret;
//}
//// 64 位输出请用 printf("%lld")
//
//
//#include <iostream>
//#include <unordered_set>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    if (s.size() < 2)
//    {
//        cout << s << endl;
//        return 0;
//    }
//
//    string ret;
//    ret += s[s.size() - 1];
//
//    unordered_set<char> hash;
//    hash.insert(s[s.size() - 1]);
//    for (int i = s.size() - 2; i >= 0; i--)
//    {
//        if (0 == hash.count(s[i]))
//        {
//            hash.insert(s[i]);
//            ret += s[i];
//        }
//    }
//
//    cout << ret;
//
//
//
//}
//// 64 位输出请用 printf("%lld")