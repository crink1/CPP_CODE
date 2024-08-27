//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    string s;
//    cin >> s;
//    vector<int> v;
//    v.push_back(s[0]);
//    for (int i = 1; i < n; i++)
//    {
//        if (s[i] > v.back())
//        {
//            v.push_back(s[i]);
//        }
//        else
//        {
//            int l = 0;
//            int r = v.size();
//            int mid;
//            while (l < r)
//            {
//                mid = l + (r - l) / 2;
//                if (s[i] > v[mid])
//                {
//                    l = mid + 1;
//                }
//                else {
//                    r = mid;
//                }
//            }
//            v[l] = s[i];
//        }
//    }
//    cout << n - v.size();
//}
//// 64 位输出请用 printf("%lld")
//
//#include <climits>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> v(n);
//    for (auto& i : v)
//    {
//        cin >> i;
//    }
//    sort(v.begin(), v.end());
//    int ret = INT_MAX;
//    for (int i = 1; i < n; i++)
//    {
//        if (v[i] - v[i - 1] < ret)
//        {
//            ret = v[i] - v[i - 1];
//        }
//    }
//    cout << ret;
//
//}
//// 64 位输出请用 printf("%lld")